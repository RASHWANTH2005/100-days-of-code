#include <stdio.h>

int main(void)
{
	int t,n,k;
	scanf("%d",&t);
	for(int i=0 ; i<t ; i++)
	{
	    scanf("%d%d",&n,&k);
	    if(n>=k && n%k==0)
	    {
	        printf("%d\n",n/k);
	    }
	    else if(n==0)
	    {
	        printf("%d\n",0);
	    }
	    else
	    {
	        printf("%d\n",-1);
	    }
	   
	}
	return 0;
}
