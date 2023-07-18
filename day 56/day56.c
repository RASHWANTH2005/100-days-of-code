#include <stdio.h>
#include<string.h>

int main(void)
{
	int t,i,j,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    n=0;
	    char s[1000];
	    scanf("%s",s);
	    for(j=0;j<strlen(s);j++)
	    {
	        if(s[j]>=48&&s[j]<=57)
	        {
	            n+=s[j]-48;
	        }
	    }
	    printf("%d\n",n);
	}
	return 0;
}
