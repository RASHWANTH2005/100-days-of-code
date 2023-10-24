#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n;
	    scanf("%lld",&n);
	    char s[n];
	    scanf("%s",s);
	    int count=1;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='c'||s[i]=='g'||s[i]=='r'||s[i]=='l')
	        {
	            count*=2;
	            count%=1000000007;
	    }}
	    printf("%d\n",count);
	}
	return 0;
}

