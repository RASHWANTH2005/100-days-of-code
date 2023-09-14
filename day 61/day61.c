#include <stdio.h>

int main(void)
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if (n%2==0)
        {
            printf("%d\n",(n/2)+1);
        }
        else
        {
            
            printf("%d\n",(n+1)/2);
        }
    }
    
	return 0;
}

