#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("壮年");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("老年");
//	}
//	else
//	{
//		printf("寿星");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//	{
//		if (b == 1)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}
//	else
//	{
//		printf("hoho");
//	}
//	return 0;
//}
//写代码的时候要注意规范，可以适当的使用{}来使代码更有条理



//练习
//1. 判断一个数是否为奇数
//2. 输出1 - 100之间的奇数
//1:
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//输入一个数
//	if (a % 2 == 1)//判断
//		printf("奇数");
//	else
//		printf("偶数");
//	return 0;
//}
//这里不在if，else后面加{}，代码更简洁。

//2:
//int main()
//{
//	int a = 1;
//	while (a <= 100)//先生成1-100的数
//	{
//		if (a % 2 == 1)//判断奇偶
//			printf("%d ", a);
//		a++;//在下面加else就会报错，而且else是多余的
//	}
//	if (a > 100)//多余了，可以删掉
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if ( 1 == day );
//	//printf("星期一");
//	//else if ( 2== day );
//	//printf("星期二");
//	//......当分支很多的时候，这种表达不方便。
//	switch (day)
//	{
//	case 1://case后面必须是整形常量。case是语句的入口
//		printf("星期一");
//		break;//break是语句的出口
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{//记得加大括号
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;//这种情况，break就把语句分成了两种分支。
//	case 6:
//	case 7:
//		printf("weekend");
//		break;//这里即使不加break也可以结束语句，但是建议加上，方便以后添加新的case.
//	default://当输入的数与所有情况都不匹配时，进行default语句.
//		printf("输入错误");
//		break;
//	
//	}//记得加大括号
//	return 0;
//}
//练习:
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1://用n进行匹配，且n为1，所以从这里进入
//        m++;//m变为3//没有break，继续运行
//    case 2:
//        n++;//n变成2
//    case 3:
//        switch (n)//再次用n进入一个嵌套的匹配
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2://n为2，从这里进入
//            m++;//m变为4
//            n++;//n变为3
//            break;//break退出嵌套的匹配
//        }
//    case 4://进行原来的匹配
//        m++;//m变成5
//        break;//结束匹配
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);//打印结果
//    return 0;
//}
















