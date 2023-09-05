#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}

//指针变量是用来存放地址的，地址是唯一标示一个内存单元的。
//指针的大小在32位平台是4个字节，在64位平台是8个字节。

//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//	*p = 0;
//	return 0;
//}
//0x表示16进制，两个数字代表一个字节，一共需要四个字节
//这个时候a中存放的数据是44 33 22 11
//修改*p为0时只把44改了，因为*p的储存类型是char
// 解引用时只访问了一个字节
//结论1:
//所以指针变量需要和存放变量类型一致，便于修改

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa=%d\n", pa);
//	printf("pc=%d\n", pc);
//	printf("pa+1=%d\n", pa + 1);//这个加1加了4字节
//	printf("pc+1=%d\n", pc + 1);//这个只加了1个字节
//	return 0;
//}
//结论2:
//指针的类型决定了指针向前或者向后走一步有多大（距离）。
//比如int+1就走了4个字节，char就走了1个字节

//注意:相同长度的指针类型也不能混用

//int main()
//{
//	int a = 0;
//	int* pi = &a;//解引用访问4个字节，+1跳过4个字节
//	float* pf = &a;//同样是4个字节，+1跳过4个字节
//	               //但他们不能通用
//	//*pi = 100;//这里修改后a储存的值为64 00 00 00
//	*pf = 100.0;//这里修改后值为 00 00 c8 42
//	return 0;
//}

//当指针使用不当时会出现野指针(指针指向的位置是不可知的)
//野指针成因:
//1. 指针未初始化
//2. 指针越界访问
//3. 指针指向的空间释放
//3:比如创建了一个局部变量，并使用了指针指向其地址
//但后来局部变量销毁了，指针还可以找到地址，但是已经无法访问了

//如何规避野指针
//指针初始化
//但当目前不知道给指针赋什么值时，可以赋成空指针，例如：

//int main()
//{
//	int a = 0;
//	int* p = NULL;
//	//*p = 100;//这样写是错误的，因为零地址不能访问
//	if (*p != NULL)
//	{
//		*p = 100;
//	}//这样就可以使用了
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");//当局部变量被销毁之后，没有任何操作时
//	//指针指向的值仍然与之前相同(空间中的值未被覆盖)
//	if (*p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//	return 0;
//}

//指针+-整数；指针的关系运算
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;
//	}
//	return 0;
//}//数组下标的写法

//int main()
//{
//	
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*p++ = 1;//*(p + i = 1)效果一样
//	}
//	return 0;
//}//指针计算的写法

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//结果为9
//	return 0;
//}
//指针相减结果是两个指针之间的元素数量
//用处:可以求字符串长度等

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

int main()
{
	printf("hehe\n");
	return 0;
}
















