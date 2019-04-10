
#include "LocalSyncOPCCLient.h"
#include <iostream>
#include "console-LocalSyncWrapper.h"
#include <string>
#include <sstream>
#include "string.h"
using namespace std;
int main(int argc, char* argv[])
{
	cout << "opc客户端命令行 OPC DA Client 实现OPC DA规范版本2.05A" << endl;
	cout << "使用-h参数查看帮助和更多功能" << endl ;
	cout << "opc client command line OPC DA Client implements OPC DA specification version 2.05A" << endl;
cout << "View help and more features with the -h parameter" << endl << endl;
	if (argc > 1) {
		int
			i;
		for (i = 0;
			i < argc;
			i++){
			cout << "接受参数 " << argv[i] << endl;
			cout << "Accept parameters " << argv[i] << endl;
			
		}
		cout << endl;
		int expression = 0;
		if (strncmp(argv[1], "-h", 2) == 0) { expression = 1; }
		if (strncmp(argv[1], "-l", 2) == 0) { expression = 2; }
		if (strncmp(argv[1], "-d", 2) == 0) { expression = 3; }
		if (strncmp(argv[1], "-rb", 3) == 0) { expression = 6; }
		else
			if (strncmp(argv[1], "-wb", 3) == 0) { expression = 7; }
			else
				if (strncmp(argv[1], "-rf", 3) == 0) { expression = 8; }
				else
					if (strncmp(argv[1], "-wf", 3) == 0) { expression = 9; }
					else
						if (strncmp(argv[1], "-r", 2) == 0) { expression = 4; }
						else
							if (strncmp(argv[1], "-w", 2) == 0) { expression = 5; }
		switch (expression) {
		case 1:
			cout << "模式 " << "-h " << "用法:显示帮助说明 " << endl;
			cout << "mode " << "-h " << "Usage: Display help description" << endl;
			printhelp();
			break;
		case 2:
			cout << "模式 " << "-l " << "用法:列出本地servername的列表" << endl;
			cout << "mode " << "-l " << "usage: list the list of local servernames" << endl;
			calllist();
			break;
		case 3:
			cout << "模式 " << "-d " << "用法:指定的servername的默认读取 " << endl;
			cout << "mode " << "-d " << "Usage: default read of the specified servername" << endl;
			if (argc < 3) {
				printinputerror();
			}
			else {
				char* myservername = argv[2];
				cout << "servername=" << myservername << endl;
				defaultrun(myservername);
			}
			break;
		case 4:
			cout << "模式 " << "-r " << "用法:用uint类型来从指定的servername的读取多个address的数值 " << endl;
			cout << "mode " << "-r " << "Usage: Use the uint type to read the value of multiple addresses from the specified servername " << endl;
			if (argc < 4) {
				printinputerror();
			}
			else {
				char* myservername = argv[2];
				cout << "servername=" << myservername << endl;
				string alladdress[100];
				for (unsigned i = 0; i + 3 < argc; i++) {
					alladdress[i] = argv[i + 3];
					cout << "address=" << alladdress[i] << endl;
				}
				callmulitreaduint(myservername, alladdress, argc);
			}
			break;
		case 5:
			cout << "模式 " << "-w " << "用法:用uint类型来从指定的servername的写入address的数值为 value"<< endl;
				cout << "mode " << "-w " << "Usage: Use the uint type to write the value of the address from the specified servername to value"<< endl;
			if (argc < 5) {
				printinputerror();
			}
			else {
				char* myservername = argv[2];
				char* myaddress = argv[3];
				uint16_t res;
				stringstream ss;
				ss << argv[4];
				ss >> res;
				uint16_t myvalue = res;
				cout << "servername=" << myservername << endl;
				cout << "address=" << myaddress << endl;
				cout << "value=" << myvalue << endl;
				callwriteuint(myservername, myaddress, myvalue);
			}
			break;
		case 6:
			cout << "模式 " << "-rb " << "用法:用bool类型来从指定的servername的读取多个address的数值" << endl;
			cout << "mode " << "-rb " << "Usage: Use the bool type to read the value of multiple addresses from the specified servername" << endl;
			if (argc < 4) {
				printinputerror();
			}
			else {
				char* myservername = argv[2];
				cout << "servername=" << myservername << endl;
				string alladdress[100];
				for (unsigned i = 0; i + 3 < argc; i++) {
					alladdress[i] = argv[i + 3];
					cout << "address=" << alladdress[i] << endl;
				}
				callmulitreadbool(myservername, alladdress, argc);
			}
			break;
		case 7:
			cout << "模式 " << "-wb " << "用法:用bool类型来从指定的servername的写入address的数值为 value"<< endl;
			cout << "mode " << "-wb " << "Usage: Use the bool type to write the value of the address from the specified servername to value"<< endl;
			if (argc < 5) {
				printinputerror();
			}
			else {
				char* myservername = argv[2];
				char* myaddress = argv[3];
				bool res;
				stringstream ss;
				ss << argv[4];
				ss >> res;
				bool myvalue = res;
				cout << "servername=" << myservername << endl;
				cout << "address=" << myaddress << endl;
				cout << "value=" << myvalue << endl;
				callwritebool(myservername, myaddress, myvalue);
			}
			break;
		case 8:
			cout << "模式 " << "-rf " << "用法:用float类型来从指定的servername的读取多个address的数值" << endl;
			cout << "mode " << "-rf " << "Usage: Use the float type to read the value of multiple addresses from the specified servername" << endl;
			if (argc < 4) {
				printinputerror();
			}
			else {
				char* myservername = argv[2];
				cout << "servername=" << myservername << endl;
				string alladdress[100];
				for (unsigned i = 0; i + 3 < argc; i++) {
					alladdress[i] = argv[i + 3];
					cout << "address=" << alladdress[i] << endl;
				}
				callmulitreadfloat(myservername, alladdress, argc);
			}
			break;
		case 9:
			cout << "模式 " << "-wf " << "用法:用float类型来从指定的servername的写入address的数值为 value" << endl;
			cout << "mode " << "-wf " << "Usage: Use the float type to write the value of the address from the specified servername to value" << endl;
			if (argc < 5) {
				printinputerror();
			}
			else {
				char* myservername = argv[2];
				char* myaddress = argv[3];
				float res;
				stringstream ss;
				ss << argv[4];
				ss >> res;
				float myvalue = res;
				cout << "servername=" << myservername << endl;
				cout << "address=" << myaddress << endl;
				cout << "value=" << myvalue << endl;
				callwritefloat(myservername, myaddress, myvalue);
			}
			break;
		default:
			printinputerror();
			break;
		}
	}
	else printhelp();
	return 0;
}
void printhelp() {
	cout << "帮助 " << endl;
	cout << "第一个参数为读或写或帮助或默认操作或列出 -h/-l/-d/-r/-w/-rb/-wb/-rf/-wf" << endl;
	cout << "第二个参数为服务器名称 servername" << endl;
	cout << "第三个参数为读或写的目标项目地址 address" << endl;
	cout << "第四个参数为写的数值 value,读不需要数值输入 " << endl;
	cout << "Help" << endl;
cout << "The first parameter is read or write or help or default action or list -h/-l/-d/-r/-w/-rb/-wb/-rf/-wf" << endl ;
cout << "The second parameter is the server name servername" << endl;
cout << "The third parameter is the target item address for reading or writing address" << endl;
cout << "The fourth parameter is the value written, value does not need to be entered " << endl;
	cout << endl;
	cout << "用法:显示帮助说明 " << endl;
	cout << "Usage: Display help description" << endl;
	cout << "usage: console-LocalSyncWrapper.exe -h" << endl;
	cout << "用法:列出本地servername的列表" << endl;
	cout << "Usage: List the list of local servernames" << endl;
	cout << "usage: console-LocalSyncWrapper.exe -l" << endl;
	cout << "用法:指定的servername的默认读取 " << endl;
	cout << "Usage: Default read of the specified servername" << endl;
	cout << "usage: console-LocalSyncWrapper.exe -d <servername>" << endl;
	cout << "用法:用uint类型来从指定的servername的读取多个address的数值 " << endl;
	cout << "Usage: Use the uint type to read the value of multiple addresses from the specified servername " << endl;
	cout << "usage: console-LocalSyncWrapper.exe -r <servername> <address> [address] [address] [address] ... [address] " << endl;
	cout << "用法:用uint类型来从指定的servername的写入address的数值为 value" << endl;
	cout << "Usage: Use the uint type to write the value of the address from the specified servername to value" << endl;
	cout << "usage: console-LocalSyncWrapper.exe -w <servername> <address> <value>" << endl;
	cout << "用法:用bool类型来从指定的servername的读取多个address的数值" << endl;
	cout << "Usage: Use the uint type to write the value of the address from the specified servername to value" << endl;
	cout << "usage: console-LocalSyncWrapper.exe -rb <servername> <address> [address] [address] [address] ... [address]" << endl;
	cout << "用法:用bool类型来从指定的servername的写入address的数值为 value" << endl;
	cout << "Usage: Use the bool type to write the value of the address from the specified servername to value" << endl;
	cout << "usage: console-LocalSyncWrapper.exe -wb <servername> <address> <value>" << endl;
	cout << "用法:用float类型来从指定的servername的读取多个address的数值" << endl;
	cout << "Usage: Use the float type to read the value of multiple addresses from the specified servername" << endl;
	cout << "usage: console-LocalSyncWrapper.exe -rf <servername> <address> [address] [address] [address] ... [address]" << endl;
	cout << "用法:用float类型来从指定的servername的写入address的数值为 value" << endl;
	cout << "Usage: Use the float type to write the address value from the specified servername to value" << endl;
	cout << "usage: console-LocalSyncWrapper.exe -wf <servername> <address> <value>" << endl;
	cout << endl;
	cout << "example: console-LocalSyncWrapper.exe -h" << endl;
	cout << "example: console-LocalSyncWrapper.exe -l" << endl;
	cout << "example: console-LocalSyncWrapper.exe -d Kepware.KEPServerEX.V6" << endl;
	cout << "example: console-LocalSyncWrapper.exe -r ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 Channel1.Device1.x3 Channel1.Device1.x4" << endl;
	cout << "example: console-LocalSyncWrapper.exe -w ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 0" << endl;
	cout << "example: console-LocalSyncWrapper.exe -rb ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 Channel1.Device1.x3 Channel1.Device1.x4" << endl;
	cout << "example: console-LocalSyncWrapper.exe -wb ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 1" << endl;
	cout << "example: console-LocalSyncWrapper.exe -rf ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 Channel1.Device1.x3 Channel1.Device1.x4" << endl;
	cout << "example: console-LocalSyncWrapper.exe -wf ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 20.55" << endl;
}
void printinputerror() {
	cout << endl << "输入的参数错误 ,请输入正确的指令" << endl ;
	cout << "The input parameter is incorrect. Please enter the correct command" << endl;
cout	<< endl;
	printhelp();
};
void defaultrun(string myservername) {
	LocalSyncOPCCLient* client = new LocalSyncOPCCLient;
	client->Init();
	cout << "started-default-read" << endl;
	if (client->Connect(myservername)) {
		cout << "connected-" << myservername << endl;
		printreaduint(client, myservername, "Channel1.Device1.x0");
		printreaduint(client, myservername, "Channel1.Device1.x1");
		printreaduint(client, myservername, "Channel1.Device1.x2");
		printreaduint(client, myservername, "Channel1.Device1.x3");
		printreaduint(client, myservername, "Channel1.Device1.x4");
		printreaduint(client, myservername, "Channel1.Device1.x5");
		printreaduint(client, myservername, "Channel1.Device1.x6");
		printreaduint(client, myservername, "Channel1.Device1.x7");
		printreaduint(client, myservername, "Channel1.Device1.x10");
		printreaduint(client, myservername, "Channel1.Device1.x11");
		printreaduint(client, myservername, "Channel1.Device1.x12");
		printreaduint(client, myservername, "Channel1.Device1.x13");
		printreaduint(client, myservername, "Channel1.Device1.x14");
		printreaduint(client, myservername, "Channel1.Device1.x15");
		printreaduint(client, myservername, "Channel1.Device1.x16");
		printreaduint(client, myservername, "Channel1.Device1.x17");
		printreaduint(client, myservername, "Channel1.Device1.y0");
		printreaduint(client, myservername, "Channel1.Device1.y1");
		printreaduint(client, myservername, "Channel1.Device1.y2");
		printreaduint(client, myservername, "Channel1.Device1.y3");
		printreaduint(client, myservername, "Channel1.Device1.y4");
		printreaduint(client, myservername, "Channel1.Device1.y5");
		printreaduint(client, myservername, "Channel1.Device1.y6");
		printreaduint(client, myservername, "Channel1.Device1.y7");
		printreaduint(client, myservername, "Channel1.Device1.y10");
		printreaduint(client, myservername, "Channel1.Device1.y11");
		printreaduint(client, myservername, "Channel1.Device1.y12");
		printreaduint(client, myservername, "Channel1.Device1.y13");
		printreaduint(client, myservername, "Channel1.Device1.y14");
		printreaduint(client, myservername, "Channel1.Device1.y15");
		client->DisConnect();
		client->Stop();
		delete client;
		cout << "disconnect-stoped-finish " << endl;
	}
	else
	{
		cout << "failed-connect " << endl;
	}
}
void callwriteuint(char* myservername, char* myaddress, uint16_t myvalue)
{
	LocalSyncOPCCLient* client = new LocalSyncOPCCLient;
	client->Init();
	if (client->Connect(myservername))
	{
		cout << "connected-" << myservername << endl;
		printwriteuint(client, myservername, myaddress, myvalue);
		client->DisConnect();
		client->Stop();
		delete client;
		cout << "disconnect-stoped-finish " << endl;
	}
	else
	{
		cout << "failed-connect " << endl;
	}
}
void printwriteuint(LocalSyncOPCCLient* client, string
	myservername, string
	myaddress, uint16_t
	myvalue) {
	cout << "write-uint-" << myaddress << "=";
	cout << myvalue;
	client->WriteUint16(myaddress, myvalue);
	cout << "-" << "write-finish " << endl;
}
void printreaduint(LocalSyncOPCCLient* client, string
	myservername, string
	myaddress) {
	cout << "read-uint-" << myaddress << "=";
	std::cout << client->ReadUint16(myaddress);
	cout << "-" << "read-finish " << endl;
}
void calllist()
{
	COPCClient::init();
	std::string C_str_name = "localhost";
	std::string hostName = C_str_name;
	COPCHost* host = COPCClient::makeHost(hostName);
	std::vector<std::string> localServerList;
	host->getListOfDAServers(IID_CATID_OPCDAServer20, localServerList);
	unsigned i = 0;
	printf("Server ID List:\n");
	for (; i < localServerList.size(); i++) {
		printf("%d. %s\n", i, localServerList[i].c_str());
	}
}
void callmulitreaduint(char* myservername, string alladdress[], int argc) {
	LocalSyncOPCCLient* client = new LocalSyncOPCCLient;
	client->Init();
	if (client->Connect(myservername))
	{
		cout << "connected-" << myservername << endl;
		for (unsigned i = 0; i + 3 < argc; i++) {
			printreaduint(client, myservername, alladdress[i]);
		}
		client->DisConnect();
		client->Stop();
		delete client;
		cout << "disconnect-stoped-finish " << endl;
	}
	else
	{
		cout << "failed-connect " << endl;
	}
}
void printwritebool(LocalSyncOPCCLient* client, string
	myservername, string
	myaddress, bool
	myvalue) {
	cout << "write-bool-" << myaddress << "=";
	cout << myvalue;
	client->WriteBool(myaddress, myvalue);
	cout << "-" << "write-finish " << endl;
}
void printreadbool(LocalSyncOPCCLient* client, string
	myservername, string
	myaddress) {
	cout << "read-bool-" << myaddress << "=";
	std::cout << client->ReadBool(myaddress);
	cout << "-" << "read-finish " << endl;
}
void printwritefloat(LocalSyncOPCCLient* client, string
	myservername, string
	myaddress, float
	myvalue) {
	cout << "write-float-" << myaddress << "=";
	cout << myvalue;
	client->WirteFloat(myaddress, myvalue);
	cout << "-" << "write-finish " << endl;
}
void printreadfloat(LocalSyncOPCCLient* client, string
	myservername, string
	myaddress) {
	cout << "read-float-" << myaddress << "=";
	std::cout << client->ReadFloat(myaddress);
	cout << "-" << "read-finish " << endl;
}
void callwritebool(char* myservername, char* myaddress, bool myvalue)
{
	LocalSyncOPCCLient* client = new LocalSyncOPCCLient;
	client->Init();
	if (client->Connect(myservername))
	{
		cout << "connected-" << myservername << endl;
		printwritebool(client, myservername, myaddress, myvalue);
		client->DisConnect();
		client->Stop();
		delete client;
		cout << "disconnect-stoped-finish " << endl;
	}
	else
	{
		cout << "failed-connect " << endl;
	}
}
void callwritefloat(char* myservername, char* myaddress, float myvalue)
{
	LocalSyncOPCCLient* client = new LocalSyncOPCCLient;
	client->Init();
	if (client->Connect(myservername))
	{
		cout << "connected-" << myservername << endl;
		printwritefloat(client, myservername, myaddress, myvalue);
		client->DisConnect();
		client->Stop();
		delete client;
		cout << "disconnect-stoped-finish " << endl;
	}
	else
	{
		cout << "failed-connect " << endl;
	}
}
void callmulitreadbool(char* myservername, string alladdress[], int argc) {
	LocalSyncOPCCLient* client = new LocalSyncOPCCLient;
	client->Init();
	if (client->Connect(myservername))
	{
		cout << "connected-" << myservername << endl;
		for (unsigned i = 0; i + 3 < argc; i++) {
			printreadbool(client, myservername, alladdress[i]);
		}
		client->DisConnect();
		client->Stop();
		delete client;
		cout << "disconnect-stoped-finish " << endl;
	}
	else
	{
		cout << "failed-connect " << endl;
	}
}
void callmulitreadfloat(char* myservername, string alladdress[], int argc) {
	LocalSyncOPCCLient* client = new LocalSyncOPCCLient;
	client->Init();
	if (client->Connect(myservername))
	{
		cout << "connected-" << myservername << endl;
		for (unsigned i = 0; i + 3 < argc; i++) {
			printreadfloat(client, myservername, alladdress[i]);
		}
		client->DisConnect();
		client->Stop();
		delete client;
		cout << "disconnect-stoped-finish " << endl;
	}
	else
	{
		cout << "failed-connect " << endl;
	}
}