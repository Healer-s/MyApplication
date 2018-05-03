/*
*		反编译APK
*	1.apktool：获取资源文件，提取图片文件，布局文件，还有一些XML的资源文件
*	2.dex2jar：将APK反编译成Java源码(将classes.dex转化为jar文件)
*	3.jd-gui：查看2中转换后的jar文件，
*/
1.首先将要反编译的apk文件后缀名改为.zip后缀，然后解压部分是未加密的,源代码加密在classes.dex留到第3步使用

2.使用apktool
apktool功能：
	apktool主要用来获取资源文件，提取图片文件，布局文件，还有一些XML的资源文件
1.移动两个文件到　/usr/local/bin 　
2．给apktool 文件执行的权限：
进入目录　cd  /usr/local/bin/ 
sudo chmod +x apktool
然后就可以在任何目录执行　apktool 了
比如在目录下反编译某个文件　 apktool d app.apk

使用:
apktool d	app-release.apk
apktool d -f  app-release.apk -o <dir>    
其中-f代表强行覆盖， -o指定目录
这里的d就是decode解码的意思


＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝

第三步

将classes.dex文件拷贝到d2j-dex2jar的解压目录下，执行命令
		sh d2j-dex2jar.sh classes.dex  
可能会出现如下提示信息：d2j-dex2jar.sh: 36: d2j-dex2jar.sh: ./d2j_invoke.sh: Permission denied

根据提示信息我们可以发现是 d2j_invoke.sh文件的权限不够，则使用命令：
		chmod +x ./d2j_invoke.sh  
再执行			sh d2j-dex2jar.sh classes.dex  
	dex2jar classes.dex -> ./classes-dex2jar.jar，证明已经转化成功
	
＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝

4.使用jd-gui
其中jd-gui可以直接双击打开。
如果有读者无法打开该文件，可以右键该文件，选择properties→permissions勾选Allow executing file as program。

如果仍然无法打开，提示
	./jd-gui: error while loading shared libraries: libgtk-x11-2.0.so.0: cannot open shared object file: No such file or directory
则可能是缺少对应的32位依赖库。执行安装命令：
    sudo apt-get install libgtk2.0-0:i386 libxxf86vm1:i386 libsm6:i386 lib32stdc++6  
最后打开jd-gui 点击file→Open File，选择刚刚转换得到的classes-dex2jar.jar文件。即可
