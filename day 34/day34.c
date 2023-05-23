#include <stdio.h>

int main(void)
{
    int t,x,z,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&a,&b);
        z=a+(2*b);
        if(z<x)
        {
            printf("NotQualify\n");
        }
        else
        {
            printf("Qualify\n");
        }
    }
	return 0;
}
