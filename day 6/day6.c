#include <stdio.h>

int main(void)
{
    int a,b,c,d,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a>=b)
        {
            b=b+c;
            if(a>=b)
            {
                b=b+d;
            }
            else
            {
                a=a+d;
            }
        }
        else
        {
            a=a+c;
            if(a>=b)
            {
                b=b+d;
            }
            else
            {
                a=a+d;
            }
        }
    if(a>=b)
    {
        printf("N\n");
    }
    else
    {
        printf("S\n");
    }
    }
	return 0;
}
