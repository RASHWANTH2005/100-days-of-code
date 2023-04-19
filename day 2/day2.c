#include <stdio.h>

int main(void)
{
    int a,b,c,t,i,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        r=((a*5)+(b*10))/c;
        printf("%d\n",r);
    }
	return 0;
}
