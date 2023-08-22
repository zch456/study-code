#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };//这里不加20会报错，但是也能运行
//	char arr2[] = { "hello bit" };
//	strcpy(arr1, arr2);//复制字符串
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr[] = { "hello world" };
//	memset(arr,'x', 5);//内存设置
//	printf("%s", arr);
//	return 0;
//}
//int get_max(int x, int y)//自定义函数
//{
//	return(x > y) ? (x) : (y);//在两者之间取最值
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}

//void Swap(int* px, int* py)//这里的叫形式参数
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
// }
//int main()
//{
//	int a = 0;//这里的叫实际参数
//	int b = 0;
//	scanf("%d%d",&a,&b);//这里要取地址
//	printf("交换前:a=%d,b=%d\n", a, b);
//	Swap(&a, &b);//这里要取地址
//	printf("交换后:a=%d,b=%d\n", a, b);
//	return 0;
//}
//当实参传递给形参时，形参相当于一份实参的临时拷贝
//形参的改变不会对实参造成影响
//只有取地址，才能使形参的地址变为实参的地址，才能对实参造成影响
//只有涉及实参的变化才需要取地址，其他情况不需要
// 练习
//1. 写一个函数可以判断一个数是不是素数。
//2. 写一个函数判断一年是不是闰年。
//3. 写一个函数，实现一个整形有序数组的二分查找。
//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。

//1.
//打印100-200的素数:
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)//这里一定是“==”
//		{
//			count++;
//			printf("%d ", i);	
//		}
//	}
//	printf("\n%d\n", count);//应该是最后再打印，不能放错地方
//	return 0;
//}
//sqrt()是一个数学函数，功能为开平方
//第68行，16可以分成4*4或者2*8。同理，当一个数不能被它开方数之前的数整除时，数之后也不可能
//所以68行可以优化为sqrt(i)
//一个偶数（2除外）一定不是素数，所以第64行，可以改成i=101，i+=2
//注意，sqrt开方类型为double，返回类型也一样。但是编译器会自动转化类型，所以不会报错

//函数写法：
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;//比break更厉害，直接结束所有语句
//	}
//	return 1;//这里return用0和1是为了区分真假
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//这里用i++也可以，但是+=2效率更高
//	{
//		if (is_prime(i))//如果真，则进行下面的语句，如果假就不进行
//		{
//			printf("%d ", i);
//			count++;//要么加{}，要么统一缩进，不然会改变语句的作用
//		}
//	}
//	printf("\ncount = %d \n", count);
//	return 0;
//}

//2.
//打印1000-2000年之间的闰年
//闰年判断规则:
//1.能被4整除且不能被100整除
//2.能被400整除
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}//2000从if进入，不满足第二个if的条件，但是它满足else if的条件，却不会进入else if
//		if (year % 400 == 0)//要注意不能加；加了之后无法进行判断
//		{//这里把else 去掉，就都会进入了
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//代码有问题，2000，1600,1200等都是闰年，但是没有打印
//简化:
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//函数写法:
//int is_leap_year(int y)//要记住在自定义函数中，设置的哪个参数
//{//后面的语句就用哪个参数，不要搞错
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//3.
//int binary_search(int arr[],int k,int sz)//要在数据前面加上数据类型
//{
//	int left = 0;
//	int right = sz - 1;//因为下标比数据个数少一
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//			if (arr[mid] < k)//不能直接写成mid
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//   			    right = mid - 1;
//			}
//			else
//			{
//				return mid;//找到了，返回下标
//			}
//	}
//	return -1;//找不到
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)//数组的下标从0开始，所以要返回一个非零的值，避免冲突
//	{//这里是==，不能写成一个等号
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}
//第208行，数组传参的时候传的是数组名，不能加方框

//4.
//关键在于取地址，然后用指针来接收


















