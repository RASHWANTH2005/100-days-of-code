#include <stdio.h>
#include <string.h>

int main(void)
{
    int t,n,l,m,i,j,k,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        l=strlen(s);
        m=n/2;
        char sr[m+1];
        char sl[m+1];
        for(j=0;j<m;j++)
        {
            sl[j]=s[j];
            
        }
        sl[j]='\0';
        for(k=0;k<l-m;k++)
        {
            sr[k]=s[k+m];
        }
        sr[k]='\0';
        x=strcmp(sl,sr);
        if(x==0)
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

