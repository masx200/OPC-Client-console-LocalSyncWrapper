什么是console-LocalSyncWrapper?
这是一个opc客户端命令行程序,面向对象的OPC DA Client SDK / ToolKit用C ++编写，支持X86 / X64，实现OPC DA规范版本2.05A
What is a console-LocalSyncWrapper?
This is an opc client command line program, object-oriented OPC DA Client SDK / ToolKit written in C++, supports X86 / X64, implements OPC DA specification version 2.05A
编译和运行环境为:windows 10 x64, 版本号为1903 ,系统内部版本号为18362.30,开发工具为Microsoft Visual Studio 2019.
The compile and run environment is: windows 10 x64, version number is 1903, the system internal version number is 18362.30, and the development tool is Microsoft Visual Studio 2019.
怎样使用console-LocalSyncWrapper?
How to use console-LocalSyncWrapper?
以管理员身份运行cmd.exe或者powershell.exe,然后运行
假设console-LocalSyncWrapper.exe所在的目录为 
Run cmd.exe or powershell.exe as an administrator and run
Suppose the directory where console-LocalSyncWrapper.exe is located is
d:\Documents\\console-LocalSyncWrapper
然后运行指令
Then run the command
d:\Documents\\console-LocalSyncWrapper\console-LocalSyncWrapper.exe
===================================================
不带参数的指令
Instruction without parameters
d:\Documents\\console-LocalSyncWrapper\console-LocalSyncWrapper.exe
默认相当于
Default equivalent
d:\Documents\\console-LocalSyncWrapper\console-LocalSyncWrapper.exe -h
===================================================
运行示例如下:
The running example is as follows:
d:\Documents\\console-LocalSyncWrapper\console-LocalSyncWrapper.exe 
得到以下输出:
Get the following output:
========================================
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
example: console-LocalSyncWrapper.exe -wb ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 true
example: console-LocalSyncWrapper.exe -rf ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 Channel1.Device1.x3 Channel1.Device1.x4
example: console-LocalSyncWrapper.exe -wf ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 20.55
==========================================
运行示例如下:得到以下输出:
d:\Documents\\console-LocalSyncWrapper\console-LocalSyncWrapper.exe -l
=======================================
opc客户端命令行 OPC DA Client 实现OPC DA规范版本2.05A
使用-h参数查看帮助和更多功能
opc client command line OPC DA Client implements OPC DA specification version 2.05A
View help and more features with the -h parameter

接受参数 D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
Accept parameters D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
接受参数 -l
Accept parameters -l

模式 -l 用法:列出本地servername的列表
mode -l usage: list the list of local servernames
localhost
ProgID: Kepware.KEPServerEX.V6 CLSID: {7BC0CC8E-482C-47CA-ABDC-0FE7F9C6E729}
ProgID: ICONICS.SimulatorOPCDA.2 CLSID: {A879768A-7387-11D4-B0D8-009027242C59}
Server ID List:
0. Kepware.KEPServerEX.V6
1. ICONICS.SimulatorOPCDA.2
==============================================
运行示例如下:得到以下输出:
d:\Documents\\console-LocalSyncWrapper\console-LocalSyncWrapper.exe -r ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0
=================================================

opc客户端命令行 OPC DA Client 实现OPC DA规范版本2.05A
使用-h参数查看帮助和更多功能
opc client command line OPC DA Client implements OPC DA specification version 2.05A
View help and more features with the -h parameter

接受参数 D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
Accept parameters D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
接受参数 -r
Accept parameters -r
接受参数 ICONICS.SimulatorOPCDA.2
Accept parameters ICONICS.SimulatorOPCDA.2
接受参数 Channel1.Device1.x0
Accept parameters Channel1.Device1.x0

模式 -r 用法:用uint类型来从指定的servername的读取多个address的数值
mode -r Usage: Use the uint type to read the value of multiple addresses from the specified servername
servername=ICONICS.SimulatorOPCDA.2
address=Channel1.Device1.x0
LAPTOP-S7TMLU1O
ProgID: Kepware.KEPServerEX.V6 CLSID: {7BC0CC8E-482C-47CA-ABDC-0FE7F9C6E729}
ProgID: ICONICS.SimulatorOPCDA.2 CLSID: {A879768A-7387-11D4-B0D8-009027242C59}
LAPTOP-S7TMLU1O
connected-ICONICS.SimulatorOPCDA.2
read-uint-Channel1.Device1.x0=1-read-finish
disconnect-stoped-finish
========================================================
运行示例如下:得到以下输出:
d:\Documents\\console-LocalSyncWrapper\console-LocalSyncWrapper.exe -w ICONICS.SimulatorOPCDA.2 Channel1.Device1.x0 1
=====================================================
opc客户端命令行 OPC DA Client 实现OPC DA规范版本2.05A
使用-h参数查看帮助和更多功能
opc client command line OPC DA Client implements OPC DA specification version 2.05A
View help and more features with the -h parameter

接受参数 D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
Accept parameters D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
接受参数 -w
Accept parameters -w
接受参数 ICONICS.SimulatorOPCDA.2
Accept parameters ICONICS.SimulatorOPCDA.2
接受参数 Channel1.Device1.x0
Accept parameters Channel1.Device1.x0
接受参数 1
Accept parameters 1

模式 -w 用法:用uint类型来从指定的servername的写入address的数值为 value
mode -w Usage: Use the uint type to write the value of the address from the specified servername to value
servername=ICONICS.SimulatorOPCDA.2
address=Channel1.Device1.x0
value=1
LAPTOP-S7TMLU1O
ProgID: Kepware.KEPServerEX.V6 CLSID: {7BC0CC8E-482C-47CA-ABDC-0FE7F9C6E729}
ProgID: ICONICS.SimulatorOPCDA.2 CLSID: {A879768A-7387-11D4-B0D8-009027242C59}
LAPTOP-S7TMLU1O
connected-ICONICS.SimulatorOPCDA.2
write-uint-Channel1.Device1.x0=1-write-finish
disconnect-stoped-finish
=================================================
运行示例如下:得到以下输出:
d:\Documents\\console-LocalSyncWrapper\console-LocalSyncWrapper.exe -d ICONICS.SimulatorOPCDA.2
============================================================
opc客户端命令行 OPC DA Client 实现OPC DA规范版本2.05A
使用-h参数查看帮助和更多功能
opc client command line OPC DA Client implements OPC DA specification version 2.05A
View help and more features with the -h parameter

接受参数 D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
Accept parameters D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
接受参数 -d
Accept parameters -d
接受参数 ICONICS.SimulatorOPCDA.2
Accept parameters ICONICS.SimulatorOPCDA.2

模式 -d 用法:指定的servername的默认读取
mode -d Usage: default read of the specified servername
servername=ICONICS.SimulatorOPCDA.2
started-default-read
LAPTOP-S7TMLU1O
ProgID: Kepware.KEPServerEX.V6 CLSID: {7BC0CC8E-482C-47CA-ABDC-0FE7F9C6E729}
ProgID: ICONICS.SimulatorOPCDA.2 CLSID: {A879768A-7387-11D4-B0D8-009027242C59}
LAPTOP-S7TMLU1O
connected-ICONICS.SimulatorOPCDA.2
read-uint-Channel1.Device1.x0=1-read-finish
read-uint-Channel1.Device1.x1=1-read-finish
read-uint-Channel1.Device1.x2=1-read-finish
read-uint-Channel1.Device1.x3=1-read-finish
read-uint-Channel1.Device1.x4=1-read-finish
read-uint-Channel1.Device1.x5=1-read-finish
read-uint-Channel1.Device1.x6=1-read-finish
read-uint-Channel1.Device1.x7=1-read-finish
read-uint-Channel1.Device1.x10=1-read-finish
read-uint-Channel1.Device1.x11=1-read-finish
read-uint-Channel1.Device1.x12=1-read-finish
read-uint-Channel1.Device1.x13=1-read-finish
read-uint-Channel1.Device1.x14=1-read-finish
read-uint-Channel1.Device1.x15=1-read-finish
read-uint-Channel1.Device1.x16=1-read-finish
read-uint-Channel1.Device1.x17=1-read-finish
read-uint-Channel1.Device1.y0=1-read-finish
read-uint-Channel1.Device1.y1=1-read-finish
read-uint-Channel1.Device1.y2=1-read-finish
read-uint-Channel1.Device1.y3=1-read-finish
read-uint-Channel1.Device1.y4=1-read-finish
read-uint-Channel1.Device1.y5=1-read-finish
read-uint-Channel1.Device1.y6=1-read-finish
read-uint-Channel1.Device1.y7=1-read-finish
read-uint-Channel1.Device1.y10=1-read-finish
read-uint-Channel1.Device1.y11=1-read-finish
read-uint-Channel1.Device1.y12=1-read-finish
read-uint-Channel1.Device1.y13=1-read-finish
read-uint-Channel1.Device1.y14=1-read-finish
read-uint-Channel1.Device1.y15=1-read-finish
disconnect-stoped-finish
==========================================
运行示例如下:得到以下输出:
d:\Documents\\console-LocalSyncWrapper\console-LocalSyncWrapper.exe  -rf   ICONICS.SimulatorOPCDA.2 random.floatrandom
=============================================
opc客户端命令行 OPC DA Client 实现OPC DA规范版本2.05A
使用-h参数查看帮助和更多功能
opc client command line OPC DA Client implements OPC DA specification version 2.05A
View help and more features with the -h parameter

接受参数 D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
Accept parameters D:\Documents\\console-LocalSyncWrapper\开发环境中console-LocalSyncWrapper\Debug\console-LocalSyncWrapper.exe
接受参数 -rf
Accept parameters -rf
接受参数 ICONICS.SimulatorOPCDA.2
Accept parameters ICONICS.SimulatorOPCDA.2
接受参数 random.floatrandom
Accept parameters random.floatrandom

模式 -rf 用法:用float类型来从指定的servername的读取多个address的数值
mode -rf Usage: Use the float type to read the value of multiple addresses from the specified servername
servername=ICONICS.SimulatorOPCDA.2
address=random.floatrandom
LAPTOP-S7TMLU1O
ProgID: Kepware.KEPServerEX.V6 CLSID: {7BC0CC8E-482C-47CA-ABDC-0FE7F9C6E729}
ProgID: ICONICS.SimulatorOPCDA.2 CLSID: {A879768A-7387-11D4-B0D8-009027242C59}
LAPTOP-S7TMLU1O
connected-ICONICS.SimulatorOPCDA.2
read-float-random.floatrandom=0.125126-read-finish
disconnect-stoped-finish
