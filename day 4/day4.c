#include <stdio.h>

int main(void)
{
    int t,i,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x<=100)
        {
            x=x;
        }
        else if(100<x&&x<=1000)
        {
            x=x-25;
        }
        else if(1000<x&&x<=5000)
        {
            x=x-100;
        }
        else
        {
            x=x-500;
        }
    printf("%d\n",x);
    }
	return 0;
}
