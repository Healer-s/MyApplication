#!/bin/bash

# 一个Bash脚本的正确开头部分

#Cleanup部分

#当然要使用root身份来运行
#可以加以判断

LOG_DIR=/var/log
#如果使用变量,当然比把代码写死的好
cd $LOG_DIR

cat /dev/null> messages
cat /dev/null> wtmp

echo "Logs cleaned up."
exit #这个命令是一种正确并且合适的退出脚本的方法
