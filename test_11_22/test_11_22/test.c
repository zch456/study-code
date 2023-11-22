#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//当我们在计算机中存储多字节数据（如整数、浮点数等）时，字节序指的是这些字节在内存中的排列顺序。
//主要有两种字节序方式：大端序（Big Endian）和小端序（Little Endian）。
//大端序：最高有效字节（Most Significant Byte，MSB）存储在最低的地址，最低有效字节（Least Significant Byte，LSB）存储在最高的地址。
//小端序：最低有效字节（LSB）存储在最低的地址，最高有效字节（MSB）存储在最高的地址。
//这段代码的目的是通过检查系统的字节序来确定当前系统是大端序还是小端序。
// 它使用了一个联合体（union）来将一个整数和一个字符进行转换，然后返回字符的值来判断字节序。
//具体的执行步骤如下：
//定义了一个联合体 un，它包含一个整型变量 i 和一个字符型变量 c。
//将整数值 1 赋值给 un.i。
//由于联合体中的所有成员共享同一块内存空间，因此当我们修改 un.i 的值时，un.c 的值也会相应地发生改变。
//返回 un.c 的值，即返回整数的最低有效字节。
//在主函数中调用 check_sys 函数，将返回值存储在 ret 变量中。
//判断 ret 的值是否等于 1，如果等于 1 则说明最低有效字节是 1，即小端序；否则，最低有效字节不是 1，即大端序。
//根据判断结果打印出相应的信息，"小端" 或 "大端"。
//返回 0，表示程序执行成功。

//int main()
//{
//    char a = -128;
//    printf("%u\n", a);
//    return 0;
//}
//输出结果为4294967168
//因为字符数据类型范围为-128~127，超了

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//这段程序会一直循环下去，因为当i是无符号整形，i<0时取i的绝对值
#include<string.h>

//int main()
//{
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d\n", strlen(a));
//    return 0;
//}
//结果为255










