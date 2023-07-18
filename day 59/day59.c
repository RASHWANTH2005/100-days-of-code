#include<string.h>
#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int c=0,flag=1;
	    char s[1000001];
	    scanf("%s",s);
	    int l=strlen(s);
	    if(l<3)
	    {
	        printf("YES\n");
	        continue;
	    }
	    for(int i=2;i<l;i++)
	    {
	        if(s[c]!=s[i])
	        {
	            printf("NO\n");
	            flag=0;
	            break;
	        }
	        else
	        {
	            if(c)
	            c=0;
	            else
	            c=1;
	        }
	    }
	    if(flag)
	    {
	        if(s[0]==s[1] || l%2==0)
	        printf("YES\n");
	        else
	        printf("NO\n");
	    }
	}
	return 0;
}
