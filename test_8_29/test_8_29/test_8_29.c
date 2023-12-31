#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//整数的二进制表示有3种:
//源码，反码，补码
//正数的三种码相同
//负数的需要计算
//最高位0代表正数，1代表负数
//7，整形占四个字节，一个字节八个比特位
//00000000000000000000000000000111 源码
//00000000000000000000000000000111 反码
//00000000000000000000000000000111 补码
//-7
//10000000000000000000000000000111 源码
//11111111111111111111111111111000(符号位不变，其他位取反)反码
//11111111111111111111111111111001(反码+1就是补码)
//整数在内存中存储的是补码，输出的是源码

//int main()
//{
//	int a = 7;
//	int b = a << 1;
//	printf("a=%d\n", a);//7
//	printf("b=%d\n", b);//14
//	return 0;
//}

//&按位与,只有两个补码对应的数字都为1才是1，有一个0就算0
//按位或，只有对应数字都为0才是0，有一个1就算1
//按位异或,相同为0，相异为1
//只适用于整形
//int main()
//{
//	int a = 3;    //00000000000000000000000000000011 3的补码
//	int b = -5;   //11111111111111111111111111111011 -5的补码
//	int c = a & b;//00000000000000000000000000000011 c的补码
//	printf("c=%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;        //00000000000000000000000000000011 3的补码
//	int b = -5;       //11111111111111111111111111111011 -5的补码
//	int c = a | b;    //11111111111111111111111111111011 c的补码
//	printf("c=%d", c);//11111111111111111111111111111010 c的反码
//	return 0;         //10000000000000000000000000000101 c的源码
//}

//int main()
//{
//	int a = 3;        //00000000000000000000000000000011 3的补码
//	int b = -5;       //11111111111111111111111111111011 -5的补码
//	int c = a ^ b;    //11111111111111111111111111111000 c的补码
//	printf("c=%d", c);//11111111111111111111111111110111 c的反码
//	return 0;         //10000000000000000000000000001000 c的源码
//}

//练习:
//不创建临时变量将两个数值交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//这种方法有可能会溢出,但速度快

//异或规律:
//a^a = 0
//0^a = a
//异或支持交换律
//优化:

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//编写代码实现：求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int a = 3;
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 32; n++)
//	{
//		if (a & 1 == 1)
//			count++;
//		a = a >> 1;//这里不加a=结果就会一直是32
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 15;
//	int count = 0;//计数
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//15的二进制为1111
//7的二进制为111
//3的二进制为11
//1的二进制为1
//每次除二的整数二进制都少一位
//但是这种方法不能计算负数

//printf("%d\n", sizeof(a));//行
//printf("%d\n", sizeof(int));//行
//printf("%d\n", sizeof a);//这样写行
//printf("%d\n", sizeof int);//这样写不行
//sizeof是操作符，不是函数

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//8(x64环境指针大小为8)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//8
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40(一个整形4字节)
//	printf("%d\n", sizeof(ch));//10(一个字符1字节)
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//区分逻辑与和按位与
//区分逻辑或和按位或
//1 & 2-----> 0
//1 && 2---- > 1
//1 | 2-----> 3
//1 || 2---- > 1
//逻辑与必须满足所有条件才为真
//逻辑或只需满足其中一个条件

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;
//    //i = a++||++b||d++;
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}
//结果是1234，因为a++=0，之后就不再进行计算

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//    i = a++||++b||d++;
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}
//结果是1334，因为a++为假，所以a变成1并计算++b(因为a++和++b是或者的关系)

//exp1 ? exp2 : exp3
//表达式1为真，计算表达式2
//为假，计算表达式3

//练习:1.
//if (a > 5)
//b = 3;
//else
//b = -3;
//转换成条件表达式，是什么样？
//2.使用条件表达式实现找两个数中较大值。

//1:
//int main()
//{
//	int a = 4;
//	int b = 0;
//	//(a > 5) ? (b = 3) : (b = -3);//必须加上括号
//	b = (a > 5 ? 3 : -3);//这种写法也可以
//	printf("%d\n", b);
//	return 0;
//}

//2:
//int main()
//{
//	int a = 5;
//	int b = 9;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//a = get_val();
//count_val(a);
//while (a > 0)
//{
//        //业务处理
//    a = get_val();
//    count_val(a);
//}
////如果使用逗号表达式，改写：
//while (a = get_val(), count_val(a), a > 0)
//{
//    //业务处理
//}

//使用“，”可以使代码更简洁

//1.[] 下标引用操作符
//2. ( ) 函数调用操作符
//3. 访问一个结构的成员 
//. 结构体.成员名
//->结构体指针->成员名

//int arr[10];//创建数组
//arr[9] = 10;//使用下标引用操作符。
//[] 的两个操作数是arr和9。
//所以arr[9]也可以写成9[arr]
//同理也可以写成*(arr+7),定位某个元素的时候可以，定义的时候不行

#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu* ps)//因为这里是形参，赋值需要指针来指向实参
//{
//	//strcpy((*ps).name, "zhangsan");
//	//(*ps).age = 20;
//	//(*ps).score = 100.0;
//	strcpy(ps->name, "zhangsan");//这就是两种访问结构体成员的方式
//	(ps->age = 20);
//	(ps->score = 100.0);
//}
//
//void print_stu(struct Stu ss)//这里不需要对实参进行改变，所以不用指针
//{
//	printf("%s %d %lf", ss.name, ss.age, ss.score);
//}
//
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}
//
//所以ps->name等价于(*ps).name

//隐式类型转换--整型提升
//当一个数据内存不足四个字节也就是一个整形时，他会进行整形提升
//也就是取补码的最后八个数字，然后以最高位为符号位，补充为四个字节
//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101 - 补码
//	//00000101 - a
//	char b = 125;
//	//00000000000000000000000001111110 - 补码
//	//01111110 - b
//	char c = a + b;
//	//10000011 - a+b
//	//10000000000000000000000001111101 - 源码
//	printf("%d\n", c);//输出结果为-126
//	return 0;
//}
//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//输出结果为c
//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}
//只要参与运算，c就会发生整型提升

//算数转换
//超过一个整形的数据，且操作符两边的数据类型不同时，进行算术转化
//遵循向上转化
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int
