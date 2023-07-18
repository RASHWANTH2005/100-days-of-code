#include <stdio.h>
#include<string.h>

int main(void)
{
	int t,i,j,len;
	char s[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%s",s);
	    len=strlen(s);
	    if(len>=5){
	        for(j=0;j<len;j++)
	        {
	  
	   if(s[j]=='p'&&s[j+1]=='a'&&s[j+2]=='r'&&s[j+3]=='t'&&s[j+4]=='y')
	                {
	                    s[j+2]='w';
	                    s[j+3]='r';
	                    s[j+4]='i';
	                }
	            }
	    }
	    printf("%s\n",s);
	}
	return 0;
}
