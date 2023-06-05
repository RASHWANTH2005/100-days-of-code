#include <stdio.h>

int main(void)
{
    int t,i,j,k,l,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
           scanf("%d", &a[i]);
        }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[k]==a[j])
                {
                    a[j]=0;
                    a[k]=0;
                }
            }
        }
        for(l=0;l<n;l++)
        {
            if(a[l] != 0)
            {
              printf("%d\n",a[l]);
            }
        }
    }    
	return 0;
}
