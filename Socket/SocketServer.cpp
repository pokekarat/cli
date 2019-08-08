#include "stdafx.h"
using namespace System;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Threading;
using namespace System::Collections::Generic;


ref class ThreadClass {
public:
	
	 static Dictionary<String^, String^>^ dataIn = gcnew Dictionary<String^, String^>();
	 
	 static void Method(System::Object^ obj) {
	
		Socket^ serverSocket = safe_cast<Socket^>(obj);
		
		NetworkStream^ netStream = gcnew NetworkStream(serverSocket);
		BinaryReader^ br = gcnew BinaryReader(netStream);
		BinaryWriter^ bw = gcnew BinaryWriter(netStream);
		try
		{
			int value1, value2;
			int result;
			while (true)
			{
				
				String^ ret = br->ReadString();
	
				//Splite each car
				array<wchar_t>^ split1 = { ';' };
				array<String^>^ s = ret->Split(split1);
				array<wchar_t>^ split2 = { ':' };
				array<String^>^ s1 = s[0]->Split(split2);

				Monitor::Enter(dataIn);
				if (dataIn->ContainsKey(s1[0]))
					dataIn[s1[0]] = s1[1] + ":" + s1[2];
				else
					dataIn->Add(s1[0], s1[1] + ":" + s1[2]);

				String^ returnAllData = "";
				for each(String^ result in dataIn->Keys)
				{
					returnAllData += result + ":" + dataIn[result] + ";";
				}
				Monitor::Exit(dataIn);

				bw->Write(returnAllData);
				returnAllData = "";

			}
		}
		catch (EndOfStreamException^ e)
		{
		}
		catch (IOException^ e)
		{
			Console::WriteLine("IOException {0}", e);
		}

		serverSocket->Shutdown(SocketShutdown::Both);
		serverSocket->Close();
		netStream->Close();
		Console::WriteLine("Shutting down server");
	}
};

int main(array<String^>^ argv)
{
	

	if (argv->Length != 1)
	{
		Console::WriteLine("Usage: Server port");
		Environment::Exit(1);
	}

	int port = 0;

	try
	{
		port = Int32::Parse(argv[0]);
	}
	catch (FormatException^ e)
	{
		Console::WriteLine("Port number {0} is ill-formed",
			argv[0]);
		Environment::Exit(2);
	}

	if (port < IPEndPoint::MinPort || port > IPEndPoint::MaxPort)
	{
		Console::WriteLine(
			"Port number must be in the range {0}-{1}",
			IPEndPoint::MinPort, IPEndPoint::MaxPort);
		Environment::Exit(3);
	}

	//array<IPAddress^> ^test = Dns::GetHostEntry(Dns::GetHostName())->AddressList;

	IPAddress^ ipAddress =
		Dns::GetHostEntry(Dns::GetHostName())->AddressList[3];
	
	IPEndPoint^ ipEndpoint = gcnew IPEndPoint(ipAddress, port);
	Socket^ listenerSocket = gcnew Socket(AddressFamily::InterNetwork,
		SocketType::Stream, ProtocolType::Tcp);
	listenerSocket->Bind(ipEndpoint);

	for (int i = 0; i < 3; i++) {

		listenerSocket->Listen(1);
		Console::WriteLine("Server listener blocking status is {0}",
			listenerSocket->Blocking);
		Socket^ serverSocket = listenerSocket->Accept();
		Console::WriteLine("New connection accepted");

		Thread^ t = gcnew Thread(gcnew ParameterizedThreadStart(ThreadClass::Method));
		t->Start(serverSocket);
		
		
		//ควรใช้ vector ในการเก็บ 
		//1. t แต่ละอันที่เกิดขึ้น หรือ 
		//2. เก็ํบ object ของ ThreadClass ที่สามารถใช้ Socket object ได้ หรือ
		//3. เก็บ serverSocket ของ แต่ละ Thread
	
	}
	

	listenerSocket->Close();
}