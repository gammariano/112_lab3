#include<stdio.h>
int main()
{
    int x,i,j,max=0;
    scanf("%d" ,&n);
    int p[n],a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d" ,&p[i],&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(i=0;i<n;i++)
        {
            if(p[i]==p[i+1])
            {
                a[i]=a[i+1];
            }
            if(max<a[i])
            {
                max=a[i];
                x=i+1;
            }
        }
    }
}
