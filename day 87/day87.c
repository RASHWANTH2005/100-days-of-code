#include <stdio.h>

int main(void)
{
	int t,x;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    for(int i=1;i<=x;i++)
	    {
	        printf("%d ",i);
	    }
	    printf("\n");
	}
	return 0;
}
