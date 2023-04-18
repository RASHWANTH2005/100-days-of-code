#include <stdio.h>

int main(void)
{
	int t,a,b,c,i;
	
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&a,&b,&c);
	    
	    if(a>(abs(b-c)))
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
