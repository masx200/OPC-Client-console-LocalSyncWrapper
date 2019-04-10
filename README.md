# OPC-Client-console-LocalSyncWrapper
什么是console-LocalSyncWrapper? 

这是一个opc客户端命令行程序,面向对象的OPC DA Client SDK / ToolKit用C ++编写，支持X86 / X64，实现OPC DA规范版本2.05A

What is a console-LocalSyncWrapper? This is an opc client command line program, object-oriented OPC DA Client SDK / ToolKit written in C++, supports X86 / X64, implements OPC DA specification version 2.05A 

编译和运行环境为:windows 10 x64, 版本号为1903 ,系统内部版本号为18362.30,开发工具为Microsoft Visual Studio 2019. 

The compile and run environment is: windows 10 x64, version number is 1903, the system internal version number is 18362.30, and the development tool is Microsoft Visual Studio 2019.

这个项目基于edimetia3d/OPC-Client-X64开发而来,解决了它不能在win10系统运行的问题,并采用命令行输入输出方式,以便在其他程序中调用.
https://github.com/edimetia3d/OPC-Client-X64

怎样使用console-LocalSyncWrapper?

How to use console-LocalSyncWrapper?

以管理员身份运行cmd.exe或者powershell.exe,然后运行

假设console-LocalSyncWrapper.exe所在的目录为 

Run cmd.exe or powershell.exe as an administrator and run

Suppose the directory where console-LocalSyncWrapper.exe is located is

d:\Documents\我的毕业论文资料\console-LocalSyncWrapper

然后运行指令

Then run the command

d:\Documents\我的毕业论文资料\console-LocalSyncWrapper\console-LocalSyncWrapper.exe

不带参数的指令

Instruction without parameters


d:\Documents\我的毕业论文资料\console-LocalSyncWrapper\console-LocalSyncWrapper.exe

默认相当于

Default equivalent

d:\Documents\我的毕业论文资料\console-LocalSyncWrapper\console-LocalSyncWrapper.exe -h


opc客户端命令行 OPC DA Client 实现OPC DA规范版本2.05A

使用-h参数查看帮助和更多功能

opc client command line OPC DA Client implements OPC DA specification version 2.05A

View help and more features with the -h parameter


帮助

第一个参数为读或写或帮助或默认操作或列出 -h/-l/-d/-r/-w/-rb/-wb/-rf/-wf

第二个参数为服务器名称 servername

第三个参数为读或写的目标项目地址 address

第四个参数为写的数值 value,读不需要数值输入

Help

The first parameter is read or write or help or default action or list -h/-l/-d/-r/-w/-rb/-wb/-rf/-wf

The second parameter is the server name servername

The third parameter is the target item address for reading or writing address

The fourth parameter is the value written, value does not need to be entered

用法:显示帮助说明

Usage: Display help description

usage: console-LocalSyncWrapper.exe -h


用法:列出本地servername的列表

Usage: List the list of local servernames

usage: console-LocalSyncWrapper.exe -l

用法:指定的servername的默认读取

Usage: Default read of the specified servername

usage: console-LocalSyncWrapper.exe -d <servername>
  
用法:用uint类型来从指定的servername的读取多个address的数值
  
Usage: Use the uint type to read the value of multiple addresses from the specified servername
  
usage: console-LocalSyncWrapper.exe -r <servername> <address> [address] [address] [address] ... [address]
  
用法:用uint类型来从指定的servername的写入address的数值为 value
  
Usage: Use the uint type to write the value of the address from the specified servername to value
  
usage: console-LocalSyncWrapper.exe -w <servername> <address> <value>
  
用法:用bool类型来从指定的servername的读取多个address的数值
  
Usage: Use the uint type to write the value of the address from the specified servername to value
  
usage: console-LocalSyncWrapper.exe -rb <servername> <address> [address] [address] [address] ... [address]
  
用法:用bool类型来从指定的servername的写入address的数值为 value
  
Usage: Use the bool type to write the value of the address from the specified servername to value
  
usage: console-LocalSyncWrapper.exe -wb <servername> <address> <value>
  
用法:用float类型来从指定的servername的读取多个address的数值
  
Usage: Use the float type to read the value of multiple addresses from the specified servername

usage: console-LocalSyncWrapper.exe -rf <servername> <address> [address] [address] [address] ... [address]
  
用法:用float类型来从指定的servername的写入address的数值为 value
  
Usage: Use the float type to write the address value from the specified servername to value
  
usage: console-LocalSyncWrapper.exe -wf <servername> <address> <value>

example: console-LocalSyncWrapper.exe -h

example: console-LocalSyncWrapper.exe -l

example: console-LocalSyncWrapper.exe -d Kepware.KEPServerEX.V6

example: console-LocalSyncWrapper.exe -r ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 Channel1.Device1.x3 Channel1.Device1.x4

example: console-LocalSyncWrapper.exe -w ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 0

example: console-LocalSyncWrapper.exe -rb ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 Channel1.Device1.x3 Channel1.Device1.x4

example: console-LocalSyncWrapper.exe -wb ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 1

example: console-LocalSyncWrapper.exe -rf ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 Channel1.Device1.x3 Channel1.Device1.x4

example: console-LocalSyncWrapper.exe -wf ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 20.55
