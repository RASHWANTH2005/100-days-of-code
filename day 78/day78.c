#include <stdio.h>

int main(void)
{
	int t,n,m,k,i,a;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d",&n,&m,&k);
	        if(n>m)
	            a=n-m;
	        else
	            a=m-n;
	    while(a>0&&k>0)
	    {
	        k--;
	        a--;
	        
	    }
	        printf("%d\n",a);
	        
	}
	return 0;
}
