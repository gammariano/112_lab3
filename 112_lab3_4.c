#include<stdio.h>
int main()
{
    int x,i=0,j;
    scanf("%d" ,&x);
    while(x>1)
    {
        if((x%2==0||x%3==0||x%5==0||x%7==0)&&(x!=2&&x!=3&&x!=5&&x!=7))
        {
            x--;
        }
        else
        {
            printf("%d" ,x);
            break;
        }
    }
    return 0;
}
