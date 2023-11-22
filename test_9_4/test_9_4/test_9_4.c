#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d", *p);
//	return 0;
//}
//当在变量前加一个*时，这个变量成为了指针变量
//使用时加*会指向地址所储存的对象 

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

//int main()
//{
//	int values[5];
//	int* vp = &values;
//	for (vp = &values[5]; vp > &values[0];)//不能>5
//	{//vp前面不能带*
//		*--vp = 0;//这里应该是先--再取地址
//	}
//	return 0;
//}
//这里for循环的条件就用了指针的关系比较

//简化版本:
//for(vp = &values[4]; vp >= &values[0];vp--)
//{
//	*vp = 0;
//}
//这段代码最后vp会指向values数组的前一个地址，这是错误的
//实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写
//因为标准并不保证它可行
//标准规定：
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较
//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//    printf("%p\n", arr);
//    printf("%p\n", &arr[0]);
//    return 0;
//}

//两个的输出结果一样

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p--------%p\n", &arr[i], p + i);
//	}
//	return 0;
//}

//数组与指针类似
//数组名表示的是数组首元素的地址
//p存放的是数组首元素的地址
//所以 p+i 其实计算的是数组 arr 下标为i的地址

//那我们就可以直接通过指针来访问数组，如下:
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));//这里必须是%d，不能是%p
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("%d %d %d", a, *p, **pp);
//	return 0;
//}
//int* p
//int 表示指针指向的类型是整形，*表示p是指针变量，p是变量名
//int**pp
//int*表示指针指向的类型是指针变量，*表示pp是指针变量，pp是变量名
//这里的pp就是二级指针

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* parr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//	return 0;
//}

//指针数组
//用指针数组实现二维数组
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);//这里应该是加上行和列
//		}//不需要&，直接parr          //i来保证是哪一行数组，arr1或者arr2
//		printf("\n");//用来换行       //j来保证是哪一列，是arr1的第几个元素
//	}
//	return 0;
//}

//函数指针是指向函数的指针变量
//函数指针可以像一般函数一样，用于调用函数，传递参数
//int MAX(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*p)(int,int) = &MAX;
//	int a = 10;
//	int b = 20;
//	int d;
//	d = p(a, b);//与直接调用函数等价
//	printf("%d\n", d);
//	return 0;
//}


