#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };//���ﲻ��20�ᱨ������Ҳ������
//	char arr2[] = { "hello bit" };
//	strcpy(arr1, arr2);//�����ַ���
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr[] = { "hello world" };
//	memset(arr,'x', 5);//�ڴ�����
//	printf("%s", arr);
//	return 0;
//}
//int get_max(int x, int y)//�Զ��庯��
//{
//	return(x > y) ? (x) : (y);//������֮��ȡ��ֵ
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}

//void Swap(int* px, int* py)//����Ľ���ʽ����
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
// }
//int main()
//{
//	int a = 0;//����Ľ�ʵ�ʲ���
//	int b = 0;
//	scanf("%d%d",&a,&b);//����Ҫȡ��ַ
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	Swap(&a, &b);//����Ҫȡ��ַ
//	printf("������:a=%d,b=%d\n", a, b);
//	return 0;
//}
//��ʵ�δ��ݸ��β�ʱ���β��൱��һ��ʵ�ε���ʱ����
//�βεĸı䲻���ʵ�����Ӱ��
//ֻ��ȡ��ַ������ʹ�βεĵ�ַ��Ϊʵ�εĵ�ַ�����ܶ�ʵ�����Ӱ��
//ֻ���漰ʵ�εı仯����Ҫȡ��ַ�������������Ҫ
// ��ϰ
//1. дһ�����������ж�һ�����ǲ���������
//2. дһ�������ж�һ���ǲ������ꡣ
//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��

//1.
//��ӡ100-200������:
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
//		if (flag == 1)//����һ���ǡ�==��
//		{
//			count++;
//			printf("%d ", i);	
//		}
//	}
//	printf("\n%d\n", count);//Ӧ��������ٴ�ӡ�����ܷŴ�ط�
//	return 0;
//}
//sqrt()��һ����ѧ����������Ϊ��ƽ��
//��68�У�16���Էֳ�4*4����2*8��ͬ����һ�������ܱ���������֮ǰ��������ʱ����֮��Ҳ������
//����68�п����Ż�Ϊsqrt(i)
//һ��ż����2���⣩һ���������������Ե�64�У����Ըĳ�i=101��i+=2
//ע�⣬sqrt��������Ϊdouble����������Ҳһ�������Ǳ��������Զ�ת�����ͣ����Բ��ᱨ��

//����д����
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;//��break��������ֱ�ӽ����������
//	}
//	return 1;//����return��0��1��Ϊ���������
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//������i++Ҳ���ԣ�����+=2Ч�ʸ���
//	{
//		if (is_prime(i))//����棬������������䣬����پͲ�����
//		{
//			printf("%d ", i);
//			count++;//Ҫô��{}��Ҫôͳһ��������Ȼ��ı���������
//		}
//	}
//	printf("\ncount = %d \n", count);
//	return 0;
//}

//2.
//��ӡ1000-2000��֮�������
//�����жϹ���:
//1.�ܱ�4�����Ҳ��ܱ�100����
//2.�ܱ�400����
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
//		}//2000��if���룬������ڶ���if������������������else if��������ȴ�������else if
//		if (year % 400 == 0)//Ҫע�ⲻ�ܼӣ�����֮���޷������ж�
//		{//�����else ȥ�����Ͷ��������
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//���������⣬2000��1600,1200�ȶ������꣬����û�д�ӡ
//��:
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
//����д��:
//int is_leap_year(int y)//Ҫ��ס���Զ��庯���У����õ��ĸ�����
//{//������������ĸ���������Ҫ���
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
//int binary_search(int arr[],int k,int sz)//Ҫ������ǰ�������������
//{
//	int left = 0;
//	int right = sz - 1;//��Ϊ�±�����ݸ�����һ
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//			if (arr[mid] < k)//����ֱ��д��mid
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//   			    right = mid - 1;
//			}
//			else
//			{
//				return mid;//�ҵ��ˣ������±�
//			}
//	}
//	return -1;//�Ҳ���
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)//������±��0��ʼ������Ҫ����һ�������ֵ�������ͻ
//	{//������==������д��һ���Ⱥ�
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}
//��208�У����鴫�ε�ʱ�򴫵��������������ܼӷ���

//4.
//�ؼ�����ȡ��ַ��Ȼ����ָ��������


















