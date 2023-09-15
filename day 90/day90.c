#include <stdio.h>

int main(void)
{
	long long int t,n,k;
	scanf("%lld",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%lld%lld",&n,&k);
	     k=k*(k+1)/2;
	    if((n<k)?printf("NO\n"):printf("YES\n"));
	}
	return 0;
}

