#include "stdafx.h"

using namespace System;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Threading;

int main(array<String^>^ argv)
{
	if (argv->Length != 2)
	{
		Console::WriteLine("Usage: Client port message-count");
		Environment::Exit(1);
	}

	int port = 0;

	try
	{
		port = Int32::Parse(argv[0]);
	}
	catch (FormatException^ e)
	{
		Console::WriteLine("Port number {0} is ill-formed", argv[0]);
		Environment::Exit(2);
	}

	if (port < IPEndPoint::MinPort || port > IPEndPoint::MaxPort)
	{
		Console::WriteLine("Port number must be in the range {0}-{1}",
			IPEndPoint::MinPort, IPEndPoint::MaxPort);
		Environment::Exit(3);
	}

	int messageCount = 0;

	try
	{
		messageCount = Int32::Parse(argv[1]);
	}
	catch (FormatException^ e)
	{
		Console::WriteLine("Message count {0} is ill-formed", argv[1]);
		Environment::Exit(4);
	}

	IPAddress^ ipAddress = nullptr;
	try
	{
		//ipAddress = Dns::GetHostEntry(Dns::GetHostName())->AddressList[3];
		ipAddress = IPAddress::Parse("192.168.43.93"); //ipAddress->Parse("192.111.x.x");
		IPEndPoint^ ipEndpoint = gcnew IPEndPoint(ipAddress, port);
		Socket^ clientSocket = gcnew Socket(AddressFamily::InterNetwork,
			SocketType::Stream, ProtocolType::Tcp);

		clientSocket->Connect(ipEndpoint);
		NetworkStream^ netStream = gcnew NetworkStream(clientSocket);
		BinaryReader^ br = gcnew BinaryReader(netStream);
		BinaryWriter^ bw = gcnew BinaryWriter(netStream);

		int value1, value2;
		int result;
		Random^ random = gcnew Random;
		for (int i = 1; i <= messageCount; ++i)
		{
			bw->Write("Pok");
			value1 = static_cast<int>(random->NextDouble() * 100);
			value2 = static_cast<int>(random->NextDouble() * 100);
			bw->Write(value1);
			bw->Write(value2);
			Console::Write("Sent values {0,3} and {1,3}",
				value1, value2);

			result = br->ReadInt32();
			Console::WriteLine(", received result {0,3}", result);
			Thread::Sleep(3000);
		}

		clientSocket->Shutdown(SocketShutdown::Both);
		Console::WriteLine("Notified server we're shutting down");
		clientSocket->Close();
		netStream->Close();
		Console::WriteLine("Shutting down client");
	}
	catch (SocketException^ e)
	{
		Console::WriteLine("Request to connect to {0} on port {1} failed"
			+ "\nbecause of {2}", ipAddress, port, e);
		Environment::Exit(5);
	}
}