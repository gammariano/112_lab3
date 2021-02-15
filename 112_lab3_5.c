#include <stdio.h>
int main()
{
    int num,i=2,x,c=0;
    scanf("%d" ,&num);
    x=num;
    while(x!=1)
    {
        while(x%i==0)
        {
            x/=i;
            if(x%i==0)
            {
                c++;
                break;
            }
            else if(x%i==1)
            {
                break;
            }
        }
        if(c==1)
        {
            break;
        }
        i++;
    }
    if(c==0)
    {

    }

}
