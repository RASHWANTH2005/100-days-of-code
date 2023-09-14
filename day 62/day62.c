#include <stdio.h>

int main(void)
{
    int t,n,x,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&x);
        if(x%2!=0)
        {
            printf("YES\n");
        }
        else if((x%2==0) && ((n-x)%2==0))
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

