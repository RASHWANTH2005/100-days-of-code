#include <stdio.h>

int main(void)
{
    int t,n,i,j,k;
    int *d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int count=0;
        scanf("%d",&n);
        d=(int*)malloc(n*sizeof(int));
        for(j=0;j<n;j++)
        {
            scanf("%d",&d[j]);
        }
        for(k=0;k<n;k++)
        {
            
            if(d[k]>=1000)
            {
                
                count++;
            }
        }
        
        printf("%d\n",count);
    }
	return 0;
}
