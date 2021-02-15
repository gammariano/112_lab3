#include <stdio.h>
int main()
{
    int num,p=0,i=2,x,c=0;
    scanf("%d" ,&num);
    x=num;
    while(x!=1)
    {
        if(x%i==0)
        {
            x/=i;
            if(p==i)
                break;
            p=i;
            c++;
        }
        else
            i++;
    }
    if(c==3)
        printf("%d is a Lucky Number" ,num);
    else
        printf("%d is not a Lucky Number" ,num);
    return 0;
}
