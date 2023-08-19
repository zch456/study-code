#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("加入比特\n");
//	printf("是否好好学习?(1/0)");
//	scanf("%d", &a);
//	if (a == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//		return 0;
//
//}
//
//
//int main()
//{
//	float b = 3.14;
//	printf("%s\n", "a");
//	printf("\"\n");
//	printf("abc\\0def");
//	printf("c\test\tset\vest\n");
//	printf("%c\n", '\130');
//	printf("%d\n", 66);
//	
//	
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line >= 20)
//	{
//		printf("好offer\n");
//           
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return(x + y);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);//输入
//	int sum = Add(n1, n2);//处理
//	printf("%d\n", sum);//输出
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = {10,11,12,13,14,15,16,17,18,19 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//
//}
//
//float a = 7 / 2.0;
//int main()
//{
//	printf("%.1f", a);
//		return 0;
//}
//int flag = 2;
//int main()
//{
//	if (!flag)
//		printf("hehe\n");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int r = (a > b ? a : b);
//	printf("%d\n", r);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n",a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 10) 
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//#define ADD(x, y) ((x)+(y))
//int main()
//{
//    int sum = ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    sum = 10 * ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    return 0;
//}
//int main()
//{
//	int num = 10;
//	&num;
//	printf("%p\n",&num);
//	int* p = &num;
//	return 0;
//}
//int main()
//{
//    printf("%d\n", sizeof(char*));
//    printf("%d\n", sizeof(short*));
//    printf("%d\n", sizeof(int*));
//    printf("%d\n", sizeof(double*));
//    return 0;
//}
//struct stu 
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[10];
//};
//int main()
//{
//	struct stu a = { "张三",20,"男","123456" };
//	printf("%s %d %s %s",a.name,a.age,a.sex,a.tele );
//
//	return 0;
//}