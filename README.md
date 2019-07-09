# c 语言学习

## 说明

记录学习 c 语言的过程。主要为了能看懂 php 语言的源码。

## 环境及工具

* windows 10
* mingw-w64
* sublime

## 学习规范

* gcc 编译文件全部放在 out 文件夹中（gcc.bat hello.c hello）
* 文件全部使用 utf-8 编码

## 踩坑集

### windows cmd 运行编译后运行出现中文乱码

参考文章：[Windows下GCC编译环境中文乱码解决方案](https://blog.csdn.net/mylibs/article/details/27913281) 

解决乱码问题解决了，但是每次都需要输入这两个参数太过于麻烦。我以为 gcc 命令是有默认值配置的文件，找不到。我就用 windows bat 脚本进行中转处理。[gcc.bat](./gcc.bat)

## 待办

- [x] 第一个实例
- [x] 代码注释
- [x] 语言数据类型
- [x] 变量
- [x] 常量
- [ ] 运算符
    - [x] 算术运算符
    - [x] 关系运算符
    - [x] 逻辑运算符
    - [x] 赋值运算符
    - [ ] 位运算符
    - [x] 杂项运算符
- [x] 顺序、分支和循环
- [x] 函数
- [x] 作用域
- [x] 数组
- [ ] 枚举
- [ ] 存储类
- [ ] 外部依赖
- [ ] 功能实现
    - [ ] 简单登录接口

## 疑问

- [ ] c99、c11 是什么
- [ ] 数据类型后面加 * 的作用是什么
- [ ] 寄存器
- [ ] RAM

## 参考网站

* [菜鸟教程](https://www.runoob.com/cprogramming/c-tutorial.html)
