#pragma once
using namespace std;
int main(int argc, char* argv[]);
void printhelp();
void printinputerror();
void defaultrun(string myservername);
//void callread(char* myservername, char* myaddress);
//void callwrite(char* myservername, char* myaddress, uint16_t myvalue);

void callwriteuint(char* myservername, char* myaddress, uint16_t myvalue);

void printwriteuint(LocalSyncOPCCLient* client, string myservername, string myaddress, uint16_t myvalue);

void printreaduint(LocalSyncOPCCLient* client, string myservername, string myaddress);

//void printwrite(LocalSyncOPCCLient* client, string myservername, string myaddress, uint16_t myvalue);

//void printread(LocalSyncOPCCLient* client, string myservername, string myaddress);

void calllist();

void callmulitreaduint(char* myservername, string alladdress[], int argc);

//void callmulitread(char* myservername, string alladdress[], int argc);

void printwritebool(LocalSyncOPCCLient* client, string myservername, string myaddress, bool myvalue);

void printreadbool(LocalSyncOPCCLient* client, string myservername, string myaddress);

void printwritefloat(LocalSyncOPCCLient* client, string myservername, string myaddress, float myvalue);

void printreadfloat(LocalSyncOPCCLient* client, string myservername, string myaddress);

void callwritebool(char* myservername, char* myaddress, bool myvalue);

void callwritefloat(char* myservername, char* myaddress, float myvalue);

//void callwritebool(char* myservername, char* myaddress, uint16_t myvalue);

//void callwritefloat(char* myservername, char* myaddress, uint16_t myvalue);

void callmulitreadbool(char* myservername, string alladdress[], int argc);

void callmulitreadfloat(char* myservername, string alladdress[], int argc);


