#include <stdio.h>
#include<string.h>
int main(void)
{
	int t,i,j,k;
	char a[26];
	scanf("%d %s",&t,a);
	for(i=0;i<t;i++)
	{
	    char s[100];
	    scanf("%s",s);
	    for(j=0;j<strlen(s);j++)
	    {
	        if(s[j]=='_')
	        {
	            s[j]=' ';
	        }
	        if(s[j]>='A'&&s[j]<='Z')
	            {
	               k=s[j]-65;
	                s[j]=a[k]-32;
	                
	            }
	               if(s[j]>='a'&&s[j]<='z')
	               {
	                   k=s[j]-97;
	                   s[j]=a[k];
	               }
	    }
	    printf("%s\n",s);
	}
	return 0;
}

