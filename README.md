# iis-module-backdoor
iis7 up version backdoor  

  
 参考：https://mp.weixin.qq.com/s/z1d3yvp14GWakyonTh_b8A
 
 实现功能:  
 
 1、远程shellcode进程注入执行  
 
 2、cmd命令执行  
 
 3、远程内存加载PE上线
   
 写代码需要注意的地方：  
   
 Ensure that you have specified __stdcall for your exported functions, or that you have configured compilation by using the __stdcall (/Gz) calling convention.  
 
 Ensure that IIS has loaded HelloWorld.dll，确保你加载了指定的模块文件，可以通过appcmd.exe module list来进行查看  
 
 Ensure that you have added the correct RegisterModule export to your definition file.  
   
 总结：  
 
 1、因为自己看到网上会使用python来进行扮演客户端的作用，而且目前自己MFC QT不完善，所以客户端自己这里就用python来实现了  
 
 2、这些代码纯粹自己学习代码使用
 
## 2020.12.10根据文档写了雏形 功能没有写
 
 
