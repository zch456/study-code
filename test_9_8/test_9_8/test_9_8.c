#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct Peo
//{
//	char name[20];
//	int age[20];
//	char sex[5];
//	char tele;
//}p1, p2;//p1��p2��������ṹ�崴������������
//Ҳ���Ժ����ٴδ����ṹ�����
//struct Peo p3 = { "����",18,"��","123456789" };
//int main()
//{
//	struct Peo p3 = { "����",18,"��",123456789};
//	return 0;
//}
//�ṹ�ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ�塣
//struct stu
//{
//	int score[20];
//	char level[20];
//	struct Peo p3;
//};
//
//int main()
//{
//	struct stu s1 = { 10,'A',{"����",18,"��",123456789}};
//	printf("%s %d %s %d %s %s\n", s1.level,s1.score,s1.p3.age);
//	return 0;//Ƕ�׽ṹ��ĳ�ʼ��
//}
//�ṹ���Ա�ķ���,Ҫ��.���ӽṹ��������ͳ�Ա��
//���Ҫ����Ƕ�׵Ľṹ���Ա���ټ�һ�����Ƕ�׽ṹ��

//��ָ��ķ������ʳ�Ա:
//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//void print(struct Stu* ps)//����Ǵ�ʵ��s�ĵ�ַ�����β�ps
//{
//	printf("%s %d\n", ps->name,ps->age);//����д��
//	printf("%s %d\n", (*ps).name, (*ps).age);
//}
//
//int main()
//{
//	struct Stu s = { "����",18 };
//	print(&s);//�ṹ���ַ����
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //���ṹ��
//	print2(&s); //����ַ
//	return 0;
//}

//�������print2����
//�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ�
//���Իᵼ�����ܵ��½�
//���Խṹ�崫��ʱ�����鴫��ַ



