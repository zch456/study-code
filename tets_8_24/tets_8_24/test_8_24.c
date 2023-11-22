#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};//这里不加长度就会报错
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	int i = 0;//做下标
//	for (i = 0; i < 10; i++)//这里写10，好不好？
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//二维数组:
//arr[][]  第一个是行第二个是列
//1 2 3 4
//2 3 4 5
//3 4 5 6

//int main()
//{
//	//int arr1[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6,};//完全初始化
//	//int arr1[3][4] = { {1,2},{3,4},{5,6} };//不完全初始化
//	int arr1[][4] = { {1,2,3,4},{2,3} };
//	//char arr2[5][10];
//	return 0;
//}
//二维数组如果有初始化，行可以省略，列不能省略

//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	int i = 0;
//	//printf("%d\n", arr[2][0]);//只打印某一个值
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}//需要用两层循环来定位到某一个元素，然后再赋值
//	//二维数组赋值需要取地址
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//用来换行
//	}
//	return 0;
//}
//下标与一维数组相同，都是从0开始
//二维数组在内存中也是连续存储的
//数组的下标是有范围的，要注意数组越界
//往往我们在写代码的时候，会将数组作为参数传给函数
//比如：我要实现一个冒泡排序函数，将一个整形数组排序
//思路:9 8 7 6 5 4 3 2 1 0排为升序
//将两个相邻的数比较
//8 9 7 6 5 4 3 2 1 0
//8 7 9 6 5 4 3 2 1 0
//8 7 6 9 5 4 3 2 1 0
//......
//8 7 6 5 4 3 2 1 0 9
//一趟冒泡排好一个，一共需要9趟冒泡

//void bubble_sort(int arr[], int sz)
//{//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{//交换
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//数组名本质上是数组首元素的地址
//地址应该使用指针来接收，所以arr本质上是指针变量

//数组名确实能表示首元素地址
//但是有两个例外:
//1.sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
int main()
{
    char arr[10] = { 1,2,3,4,5 };
    printf("%p\n", arr);//arr就是首元素地址
    printf("%p\n", arr+1);

    printf("%p\n", &arr[0]);//首元素的地址
    printf("%p\n", &arr[0]+1);

    printf("%p\n", &arr);//数组的地址
    printf("%p\n", &arr+1);//这个比上面的多了40，因为数组的长度为40
    //int n = sizeof(arr);
    //printf("%d\n", n);//40
    //输出结果
    return 0;
}

//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);//48
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);//两个差了16
//	return 0;
//}
//二维数组的数组名也表示首元素的地址
//表示的是第0行的数组的地址

//int main()
//{
//	int arr[3][4];     //48      第一行数组的大小，16
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//求二维数组有几行
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//求有几列
//	return 0;         //16       第一行第一列的元素，4   
//}

//数组的应用实例1.三子棋2.扫雷游戏






