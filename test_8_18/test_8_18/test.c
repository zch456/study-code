#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("����");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("׳��");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("����");
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
//д�����ʱ��Ҫע��淶�������ʵ���ʹ��{}��ʹ�����������



//��ϰ
//1. �ж�һ�����Ƿ�Ϊ����
//2. ���1 - 100֮�������
//1:
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//����һ����
//	if (a % 2 == 1)//�ж�
//		printf("����");
//	else
//		printf("ż��");
//	return 0;
//}
//���ﲻ��if��else�����{}���������ࡣ

//2:
//int main()
//{
//	int a = 1;
//	while (a <= 100)//������1-100����
//	{
//		if (a % 2 == 1)//�ж���ż
//			printf("%d ", a);
//		a++;//�������else�ͻᱨ������else�Ƕ����
//	}
//	if (a > 100)//�����ˣ�����ɾ��
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if ( 1 == day );
//	//printf("����һ");
//	//else if ( 2== day );
//	//printf("���ڶ�");
//	//......����֧�ܶ��ʱ�����ֱ�ﲻ���㡣
//	switch (day)
//	{
//	case 1://case������������γ�����case���������
//		printf("����һ");
//		break;//break�����ĳ���
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{//�ǵüӴ�����
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;//���������break�Ͱ����ֳ������ַ�֧��
//	case 6:
//	case 7:
//		printf("weekend");
//		break;//���Ｔʹ����breakҲ���Խ�����䣬���ǽ�����ϣ������Ժ�����µ�case.
//	default://����������������������ƥ��ʱ������default���.
//		printf("�������");
//		break;
//	
//	}//�ǵüӴ�����
//	return 0;
//}
//��ϰ:
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1://��n����ƥ�䣬��nΪ1�����Դ��������
//        m++;//m��Ϊ3//û��break����������
//    case 2:
//        n++;//n���2
//    case 3:
//        switch (n)//�ٴ���n����һ��Ƕ�׵�ƥ��
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2://nΪ2�����������
//            m++;//m��Ϊ4
//            n++;//n��Ϊ3
//            break;//break�˳�Ƕ�׵�ƥ��
//        }
//    case 4://����ԭ����ƥ��
//        m++;//m���5
//        break;//����ƥ��
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);//��ӡ���
//    return 0;
//}
















