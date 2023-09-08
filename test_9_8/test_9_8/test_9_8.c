#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Peo
{
	char name[20];
	int age[20];
	char sex[5];
	char tele;
}p1, p2;//p1和p2是用这个结构体创建的两个变量
//也可以后续再次创建结构体变量
//struct Peo p3 = { "张三",18,"男","123456789" };
//int main()
//{
//	struct Peo p3 = { "张三",18,"男",123456789};
//	return 0;
//}
//结构的成员可以是标量、数组、指针，甚至是其他结构体。
struct stu
{
	int score[20];
	char level[20];
	struct Peo p3;
};

int main()
{
	struct stu s1 = { 10,'A',{"张三",18,"男",123456789}};
	return 0;//嵌套结构体的初始化
}


















