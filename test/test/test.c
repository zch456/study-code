#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�����жϹ���:
//1.�ܱ�4�����Ҳ��ܱ�100����
//2.�ܱ�400����

//int is_leap_year(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0)
//	{
//		return 1;
//	}
//	else if (a % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int year, month, day;
//	scanf("%d,%d,%d", &year, &month, &day);
//	if (is_leap_year(year))
//	{
//		switch (month)
//		{
//		case 1:
//			a = day;
//			break;
//		case 2:
//			a = 31 + day;
//			break;
//		case 3:
//			a = 31 + 28 + day;
//			break;
//		case 4:
//			a = 31 + 28 + 30 + day;
//			break; 
//		case 5:
//			a = 31 + 28 + 30 + 31 + day;
//			break; 
//		case 6:
//			a = 31 + 28 + 30 + 31 + 30 + day;
//			break; 
//		case 7:
//			a = 31 + 28 + 30 + 31 + 30 + 31 + day;
//			break; 
//		case 8:
//			a = 31 + 28 + 30 + 31 + 30 + 31 + 31 + day;
//			break; 
//		case 9:
//			a = 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + day;
//			break; 
//		case 10:
//			a = 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
//			break; 
//		case 11:
//			a = 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
//			break;
//		case 12:
//			a = 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + day;
//			break;
//		default:
//			break;
//    	}
//	}
//	else
//	{
//		switch (month)
//		{
//		case 1:
//			a = day;
//			break;
//		case 2:
//			a = 31 + day;
//			break;
//		case 3:
//			a = 31 + 29 + day;
//			break;
//		case 4:
//			a = 31 + 29 + 30 + day;
//			break;
//		case 5:
//			a = 31 + 29 + 30 + 31 + day;
//			break;
//		case 6:
//			a = 31 + 29 + 30 + 31 + 30 + day;
//			break;
//		case 7:
//			a = 31 + 29 + 30 + 31 + 30 + 31 + day;
//			break;
//		case 8:
//			a = 31 + 29 + 30 + 31 + 30 + 31 + 31 + day;
//			break;
//		case 9:
//			a = 31 + 29 + 30 + 31 + 30 + 31 + 31 + 30 + day;
//			break;
//		case 10:
//			a = 31 + 29 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
//			break;
//		case 11:
//			a = 31 + 29 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
//			break;
//		case 12:
//			a = 31 + 29 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + day;
//			break;
//		default:
//			break;
//		}
//	}
//	printf("%d\n", a);
//	return 0;
//}

//�������򣨴�С���󣩣�

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	if (b > c)
//	{
//		b = b + c;
//		c = b - c;
//		b = b - c;
//	}//����Ϊ5 3 1ʱ�����Ϊ3 1 5
//	//�����ٴ��ж�a��b��ֵ
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

////��ӡ�žų˷���
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{//ֻ��j<=i�Ż����2*1��2*2֮��ģ��������1*2 1*3 1*4һֱ����ѭ��
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


