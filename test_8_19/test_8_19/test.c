#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    int a = 1;
//    while (a <= 10)
//    {
//        printf("%d\n", a);
//        a++;
//    }
//    return 0;
//}
// 
//int main()
//{
//    int a = 1;
//    while (a <= 10)
//    {
//        if (a == 5)
//            break;//用于永久终止循环
//            printf("%d ", a);//先打印，在++
//            a++;
//    }
//    return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (a == 5)
//			continue;//continue会跳过后面的代码
//		printf("%d", a);//结果是1234
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		a++;
//		if (a == 5)
//			continue;
//		printf("%d ", a);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//getchar可以一直输入数据，只要不等于它的结束值，就不会结束。它的结束值为Ctrl+z

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}//输出结果是只输出0-9的数字

//使用for循环 在屏幕上打印1-10的数字
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)//记得在（）中的表达式之间加;
//	printf("%d ", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (a == 5)
//			break;//同样用于永久终止循环，与while中作用一样
//		printf("%d ", a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (a == 5)
//			continue;//同样是跳过后面的代码，但后面会回到a++语句
//		printf("%d ", a);//结果是1 2 3 4 6 7 8 9 10
//	}
//	return 0;
//}

//int i = 0;
//for (i = 0; i < 10; i++)//前闭后开的写法
//推荐使用前闭后开的写法，有时会更加直观，10即循环了10次。

//for (i = 0; i <= 9; i++)//两边都是闭区间
//但也有例外，例如我要输出100-200之间的数字
//int i = 0;
//for (i = 100; i <= 200; i++)//这样就比i = 100；i < 200要好

//int main()
//{
//	for (;;)
//		printf("hehe\n");
//	return 0;
//}
//即使省略表达式也要保留;
//for循环的判断部分省略意味着判断条件会恒成立
//初始化部分也可以省略，但不建议省略，例如：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 3; a++)
//	{
//		for (b = 0;b < 3; b++)
//			printf("hehe\n");
//	}
//	return 0;
//}
//这个结果是打印9个hehe，即每次进入b的循环b都会初始化
//如果去掉b的初始化，b变成3之后就不会初始化，就不会打印hehe
//所以结果为3个hehe
//for还可以用多个变量来控制循环

//一道练习题：请问循环几次？
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    return 0;
//}
//循环0次，因为k被赋值为0,0为假，所以不循环

//int main()
//{
//    int a = 1;
//    do 
//    {
//        printf("%d ", a);
//        a++;
//    } while (a <= 10);
//    return 0;
//}

//int main()
//{
//	int a = 1;
//	do {
//		if (5 == a)
//			break;//同样是永久终止循环
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	do {
//		if (5 == a)
//			continue;//同样是跳过下面的代码
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//	return 0;
//}

//练习：
//1. 计算 n的阶乘。
//2. 计算 1!+ 2!+ 3!+ …… + 10!
//3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//4. 编写代码，演示多个字符从两端移动，向中间汇聚。
//5.编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。

//1.
//错误答案
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while (a != 1)
//		a--;
//	//printf("%d", a * (a--));
//	return 0;
//}
//思路:
//n 的阶乘，就是1*2*3*4*...*n，所以就要有一个数去不断递增，直到增加为n。
// 想要将所有递增的数字相乘，就要有一个地址去储存计算之后的结果。
// 这时只能创建新的变量。
// 最后当那个数增加到 > n 的时候，退出循环。
//正确答案(for语句):
//int main()
//{
//	int a = 0;//这个变量用来储存输入的数字
//	int b = 0;//这个变量用来与 a 比较并递增
//	int c = 1;//这个变量用来与 b 相乘并储存计算结果
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//		c = c * b;//多次改变 c 的值
//	printf("%d\n", c);
//	return 0;
//}
//while语句的答案:
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 1;
//	scanf("%d", &a);
//	while (b <= a)
//	{		
//		c = c * b;
//		b++;
//		if (b > a)//这两句都多余了
//			break;//包括这句
//	//当打印处于这里时，结果错误
//	}
//	printf("%d\n", c);//当打印在这里时，结果正确
//	return 0;
//}
//要找好printf的位置，避免多次打印甚至循环次数减少
//记得加空格或者\n，不然容易看错数据，不好修改
//反向计算:
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d", &a);//这里的思路是使b由a的值减小到1
//	for (b = a; b >= 1; b--)//这里循环判断表达式不能是b==1,也不能是b==a
//		//要记住，这里的表达式含义为循环的条件，不满足条件就不进入循环
//		c = c * b;
//	printf("%d\n", c);
//	return 0;
//}
//2.
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int sum = 0;
//	for (a = 1;a <= 10;a++)
//	{
//		int c = 1;//当没有这行代码，每次循环c的值会被保留，导致结果出错
//		for (b = 1; b <= a; b++)
//			c = c * b;
//		sum = sum + c;
//	}
//	printf("%d\n",sum );
//	return 0;
//}
//3的阶乘为1*2*3
//4的阶乘为1*2*3*4*
//每次计算都要重新算一遍已有的结果，浪费时间
//优化:
//int main()
//{
//	int a = 0;
//	int c = 1;
//	int sum = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		c = c * a;
//		sum = sum + c;
//	}
//	printf("%d\n", sum);
//	return 0;
//}