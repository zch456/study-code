#define _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<stdio.h>
//��������Ϸ:
//�����������һ����(1-100)
//�����֣��´��ˣ���С�ˣ�ֱ���¶��ˣ�����
//д����ĺ�ϰ�ߣ�дһ����һ����

void menu()//��ӡһ���˵�
{
    printf("***********************\n");
    printf("******   1.play  ******\n");
    printf("******   0.exit  ******\n");
    printf("***********************\n");

}
void game()
{
    int ret = rand()%100+1;//���������,����0~RAND MAX(0-32767)������
    int guess = 0;//����Ϊ�˰������������1-100����Ҫ��rand()�޸�
    while (1)
    {
        printf("����������:\n");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("��С��\n");
        }
        else if (guess > ret)
        {
            printf("�´���\n");
        }
        else
        {
            printf("��ϲ�㣬�¶���\n");
            break;
        }
    }
    //return 0;//void��������Ҫ���أ����ﲻ��return 0
}
int main()
{
    srand((unsigned int)time(NULL));//���������,NULL�ǿ�ָ��
    int input = 0;//srand����ҪƵ�����ã����Ƶ�����þͲ������
    do
    {
        menu();
        printf("��ѡ��:\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����,����ѡ��\n");
            break;
        }
    } while (input);
    return 0;
}
