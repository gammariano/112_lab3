#include <stdio.h>
int main()
{
    int num,t,c,d,r=0;
    scanf("%d" ,&num);
    while(num>=1)
    {
        num--;
        t=num;
        while(t)
        {
            r*=10;
            r=r+t%10;
            t/=10;
        }
        if(r==num)
        {
            d=num/2.0;
            for(c=2;c<=d;c++)
            {
                if(num%c==0)
                {
                    break;
                }
            }
            if(c==d+1)
            {
                break;
            }
        }
        r=0;
    }
    printf("%d\n" ,num);
    return 0;
}
