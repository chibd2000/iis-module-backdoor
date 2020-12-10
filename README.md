# iis-module-backdoor
iis7 up version backdoor  

https://mp.weixin.qq.com/s/z1d3yvp14GWakyonTh_b8A
 
 实现功能:  
 
 1、进程注入执行shellcode  
 
 2、cmd命令执行  
 
 Ensure that you have specified __stdcall for your exported functions, or that you have configured compilation by using the __stdcall (/Gz) calling convention.  
 Ensure that IIS has loaded HelloWorld.dll，确保你加载了指定的模块文件，可以通过appcmd.exe module list来进行查看  
 Ensure that you have added the correct RegisterModule export to your definition file.  
