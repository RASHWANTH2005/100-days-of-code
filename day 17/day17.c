#include <stdio.h>

int main(void)
{
    int t,n,i,j,k,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int count=0;
        scanf("%d",&n);
        int d[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&d[j]);
        }
        for(k = 0;k<n;k++)
        {  
            for(m=k+1;m<n;m++)
            {    
                if(d[k]==d[m])
                { 
                    count++;
                    break;
                    
                }
                
            }
            
        }
        printf("%d\n",n-count);
    }
	return 0;
}

