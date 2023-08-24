#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void new_line()
//{
//printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();//要记得加上括号
//	}
//}
//
//int main()
//{
//	three_line();//这里也是
//	return 0;
//}
//自定函数的嵌套调用
//但是不能嵌套定义，如不能在一个自定义函数中再次自定义一个函数

//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));
//	return 0;
//}
//这里加上\n打印结果就是4332，因为\n也算一个字符
//去掉之后就是4321

//在头文件中放函数声明，源文件中放函数实现
//好处:1.模块化 2.提升效率 3.可以保护代码被泄露
//在使用的时候只需要引用一下头文件
#include"Add.h"//包含头文件相当于拷贝的一份头文件的代码
#include"Sub.h"

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);//scanf函数记得取地址
//	int sum = Add(a, b);
//	int ret = Sub(a, b);
//	printf("%d %d", sum, ret);
//	return 0;
//}

//练习1：
//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：
//输入 1234，输出 1 2 3 4.
//%u是打印无符号整数
//思路:1234%10=4，4得到了。1234/10=123，123%10=3,3得到了。
//123/10=12，12%10=2,2得到了。12/10=1,1%10=1，1得到了。
//但是打印出来的是倒序，而不是顺序。
//正常的方法可以实现
//递归的实现:

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//123
//	}
//	printf("%d ", n % 10);//4
//}//套娃
//
//int main()
//{
//	unsigned int num = 0;//注意是无符号整形
//	scanf("%u", &num);//注意是%u
//	print(num);
//	return 0;
//}
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4


//练习2：
//编写函数不允许创建临时变量，求字符串的长度。
//可创建临时变量的情况:
//int my_strlen(char* str)//要通过a的地址来找到整个字符串
//{
//	int count = 0;
//	while (*str != '\0')//记得加''
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";//a b c \0四个字符
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//my_strlen(abc)
//1+my_strlen(bc)
//1+1+my_strlen(c)
//1+1+1+my_strlen()

//int my_strlen(char*str)
//{
//	if (*str != '\0')//这里一定得是*str
//		return 1 + my_strlen(str + 1);//这里str+1的原因是要去取b的地址
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";//a b c \0四个字符
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

// 练习3：
//求n的阶乘。（不考虑溢出）
//递归实现
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//迭代实现-非递归
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)//记得是<=
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//这里如果加\n就要多输入一遍值
//	int ret = fac(a);
//	printf("%d\n", ret);
//	return 0;
//}
//但是也不是所有的问题都适合用递归，如练习4

//练习4：
//求第n个斐波那契数。（不考虑溢出）
//斐波那契数列:
//1 1 2 3 5 8 13 21 34 55

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//这里加了\n就要多打一次才输出
//	int ret = Fib(a);
//	printf("%d\n", ret);
//	printf("%d", count);
//	return 0;
//}
//这段代码效率太低。例如：当求第40个数的时候，n=3被计算了39088169次。
//40
//39            38
//38     37     37     36
//37 36  36 35  36 35  35 34
//所以这个问题就不适合用递归来解决

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//数据太大会出错，因为会溢出
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//这里加了\n就要多打一次才输出
//	int ret = Fib(a);
//	printf("%d\n", ret);
//	return 0;
//}








