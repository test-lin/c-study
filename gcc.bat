@echo off

gcc.exe -fexec-charset=gbk -finput-charset=utf-8 %1 -o out\%2
