#include "stdafx.h"
using namespace System;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Threading;


ref class ThreadClass {
public:
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
				Console::WriteLine(br->ReadString());
				value1 = br->ReadInt32();
				value2 = br->ReadInt32();
				Console::Write("Received values {0,3} and {1,3}",
					value1, value2);
				result = value1 + value2;
				bw->Write(result);
				Console::WriteLine(", sent result {0,3}", result);
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

	for (int i = 0; i < 5; i++) {

		listenerSocket->Listen(1);
		Console::WriteLine("Server listener blocking status is {0}",
			listenerSocket->Blocking);
		Socket^ serverSocket = listenerSocket->Accept();
		Console::WriteLine("New connection accepted");
		Thread^ t = gcnew Thread(gcnew ParameterizedThreadStart(ThreadClass::Method));
		t->Start(serverSocket);
	}

	listenerSocket->Close();
}