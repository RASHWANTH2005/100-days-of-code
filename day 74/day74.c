#include <stdio.h>

int main(void)
{
    
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int p[n],s[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d %d",&p[i],&s[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(p[i]>8)
	        {
	            s[i]=0;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(p[i]==p[j]&&i!=j&&s[i]!=0&&s[j]!=0)
	            {
	                if(s[i]>=s[j])
	                {
	                    s[j]=0;
	                }
	            }
	        }
	    }
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+s[i];
	    }
	    printf("%d\n",sum);
	}
	return 0;
}


