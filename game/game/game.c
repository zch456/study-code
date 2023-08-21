#define _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<stdio.h>
//猜数字游戏:
//电脑随机产生一个数(1-100)
//猜数字，猜打了，猜小了，直到猜对了，结束
//写代码的好习惯，写一步测一步。

void menu()//打印一个菜单
{
    printf("***********************\n");
    printf("******   1.play  ******\n");
    printf("******   0.exit  ******\n");
    printf("***********************\n");

}
void game()
{
    int ret = rand()%100+1;//生成随机数,生成0~RAND MAX(0-32767)的数字
    int guess = 0;//我们为了把随机数限制在1-100，需要对rand()修改
    while (1)
    {
        printf("请输入数字:\n");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else if (guess > ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("恭喜你，猜对了\n");
            break;
        }
    }
    //return 0;//void函数不需要返回，这里不用return 0
}
int main()
{
    srand((unsigned int)time(NULL));//生成随机数,NULL是空指针
    int input = 0;//srand不需要频繁调用，如果频繁调用就不够随机
    do
    {
        menu();
        printf("请选择:\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误,重新选择\n");
            break;
        }
    } while (input);
    return 0;
}
