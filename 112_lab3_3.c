#include<stdio.h>
int main()
{
    int i=2,j,num,zero=0;
    scanf("%d" ,&num);
    while(num!=1)
    {
        if(num%i==0)
        {
            while(num%i==0)
            {
                printf("%d\n" ,i);
                num/=i;
            }
        }
        i++;
    }
    printf("%d" ,zero);
    return 0;
}
