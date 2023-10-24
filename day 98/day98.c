#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    char s[100],a[100];
	    scanf("%s",s);
	    scanf("%s",a);
	    int count=0;
	     for(int j=0 ;a[j]!='\0';j++)
	       {
	        for(int k=0;s[k]!='\0';k++)
	        {
	            if(a[j]==s[k])
	            {
	                count++;
	                break;
	            }
	        }
	       }
	    printf("%d\n",count);
	    
	}
	return 0;
}
