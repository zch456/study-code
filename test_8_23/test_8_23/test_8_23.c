#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void new_line()
//{
//printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();//Ҫ�ǵü�������
//	}
//}
//
//int main()
//{
//	three_line();//����Ҳ��
//	return 0;
//}
//�Զ�������Ƕ�׵���
//���ǲ���Ƕ�׶��壬�粻����һ���Զ��庯�����ٴ��Զ���һ������

//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));
//	return 0;
//}
//�������\n��ӡ�������4332����Ϊ\nҲ��һ���ַ�
//ȥ��֮�����4321

//��ͷ�ļ��зź���������Դ�ļ��зź���ʵ��
//�ô�:1.ģ�黯 2.����Ч�� 3.���Ա������뱻й¶
//��ʹ�õ�ʱ��ֻ��Ҫ����һ��ͷ�ļ�
#include"Add.h"//����ͷ�ļ��൱�ڿ�����һ��ͷ�ļ��Ĵ���
#include"Sub.h"

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);//scanf�����ǵ�ȡ��ַ
//	int sum = Add(a, b);
//	int ret = Sub(a, b);
//	printf("%d %d", sum, ret);
//	return 0;
//}

//��ϰ1��
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺
//���� 1234����� 1 2 3 4.
//%u�Ǵ�ӡ�޷�������
//˼·:1234%10=4��4�õ��ˡ�1234/10=123��123%10=3,3�õ��ˡ�
//123/10=12��12%10=2,2�õ��ˡ�12/10=1,1%10=1��1�õ��ˡ�
//���Ǵ�ӡ�������ǵ��򣬶�����˳��
//�����ķ�������ʵ��
//�ݹ��ʵ��:

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//123
//	}
//	printf("%d ", n % 10);//4
//}//����
//
//int main()
//{
//	unsigned int num = 0;//ע�����޷�������
//	scanf("%u", &num);//ע����%u
//	print(num);
//	return 0;
//}
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4


//��ϰ2��
//��д��������������ʱ���������ַ����ĳ��ȡ�
//�ɴ�����ʱ���������:
//int my_strlen(char* str)//Ҫͨ��a�ĵ�ַ���ҵ������ַ���
//{
//	int count = 0;
//	while (*str != '\0')//�ǵü�''
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";//a b c \0�ĸ��ַ�
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//my_strlen(abc)
//1+my_strlen(bc)
//1+1+my_strlen(c)
//1+1+1+my_strlen()

//int my_strlen(char*str)
//{
//	if (*str != '\0')//����һ������*str
//		return 1 + my_strlen(str + 1);//����str+1��ԭ����Ҫȥȡb�ĵ�ַ
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";//a b c \0�ĸ��ַ�
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

// ��ϰ3��
//��n�Ľ׳ˡ��������������
//�ݹ�ʵ��
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//����ʵ��-�ǵݹ�
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)//�ǵ���<=
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//���������\n��Ҫ������һ��ֵ
//	int ret = fac(a);
//	printf("%d\n", ret);
//	return 0;
//}
//����Ҳ�������е����ⶼ�ʺ��õݹ飬����ϰ4

//��ϰ4��
//���n��쳲����������������������
//쳲���������:
//1 1 2 3 5 8 13 21 34 55

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//�������\n��Ҫ���һ�β����
//	int ret = Fib(a);
//	printf("%d\n", ret);
//	printf("%d", count);
//	return 0;
//}
//��δ���Ч��̫�͡����磺�����40������ʱ��n=3��������39088169�Ρ�
//40
//39            38
//38     37     37     36
//37 36  36 35  36 35  35 34
//�����������Ͳ��ʺ��õݹ������

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//����̫��������Ϊ�����
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//�������\n��Ҫ���һ�β����
//	int ret = Fib(a);
//	printf("%d\n", ret);
//	return 0;
//}








