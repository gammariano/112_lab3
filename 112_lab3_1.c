#include<stdio.h>
int main()
{
    int count,i,j,k,max=0,win=0;
    for(i=1;i<=5;i++)
    {
        count=0;
        for(j=0;j<4;j++)
        {
            scanf("%d" ,&k);
            count+=k;
        }
        if(count>max)
        {
            max=count;
            win=i;
        }
    }
    printf("%d %d\n" ,win,max);

    return 0;
}
