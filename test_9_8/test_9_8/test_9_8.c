#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct Peo
//{
//	char name[20];
//	int age[20];
//	char sex[5];
//	char tele;
//}p1, p2;//p1和p2是用这个结构体创建的两个变量
//也可以后续再次创建结构体变量
//struct Peo p3 = { "张三",18,"男","123456789" };
//int main()
//{
//	struct Peo p3 = { "张三",18,"男",123456789};
//	return 0;
//}
//结构的成员可以是标量、数组、指针，甚至是其他结构体。
//struct stu
//{
//	int score[20];
//	char level[20];
//	struct Peo p3;
//};
//
//int main()
//{
//	struct stu s1 = { 10,'A',{"张三",18,"男",123456789}};
//	printf("%s %d %s %d %s %s\n", s1.level,s1.score,s1.p3.age);
//	return 0;//嵌套结构体的初始化
//}
//结构体成员的访问,要用.连接结构体变量名和成员名
//如果要访问嵌套的结构体成员，再加一个点和嵌套结构体

//用指针的方法访问成员:
//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//void print(struct Stu* ps)//这个是传实参s的地址给到形参ps
//{
//	printf("%s %d\n", ps->name,ps->age);//两种写法
//	printf("%s %d\n", (*ps).name, (*ps).age);
//}
//
//int main()
//{
//	struct Stu s = { "张三",18 };
//	print(&s);//结构体地址传参
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //传结构体
//	print2(&s); //传地址
//	return 0;
//}

//上面代码print2更好
//函数传参的时候，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大
//所以会导致性能的下降
//所以结构体传参时，建议传地址



