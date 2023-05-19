#include <stdio.h>

int main(void)
{
    int t,a,b,c,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        x=a+b+c;
        if(x==180)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
	return 0;
}
