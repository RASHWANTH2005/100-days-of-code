#include <stdio.h>

int main(void)
{
    int t,n,i,q,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        q=n/4;
        r=n%4;
        if(r==0)
        {
            printf("%d\n",q);
        }
        else
        {
            printf("%d\n",q+1);
        }
    }
    
	return 0;
}
