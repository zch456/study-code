#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Peo
{
	char name[20];
	int age[20];
	char sex[5];
	char tele;
}p1, p2;//p1��p2��������ṹ�崴������������
//Ҳ���Ժ����ٴδ����ṹ�����
//struct Peo p3 = { "����",18,"��","123456789" };
//int main()
//{
//	struct Peo p3 = { "����",18,"��",123456789};
//	return 0;
//}
//�ṹ�ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ�塣
struct stu
{
	int score[20];
	char level[20];
	struct Peo p3;
};

int main()
{
	struct stu s1 = { 10,'A',{"����",18,"��",123456789}};
	return 0;//Ƕ�׽ṹ��ĳ�ʼ��
}


















