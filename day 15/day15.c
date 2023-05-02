#include <stdio.h>

int main()
{
    int t,n,i,j,k,l;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(l=0;l<n;l++)
        {
           scanf("%d",&a[l]); 
        }
        int x = sizeof(a) / sizeof(a[0]);

        int c = 0;
        int b;
        for (j = 0; j < n; j++)
        {
            int count = 0;
            for (k = 0; k < n; k++)
            {
                if (a[k] == a[j])
                {
                    count++;
                }
                
            }
            if (count > c)
            {
                c = count;
            }
            b=x-c;
        }
        printf("%d\n",b);
    }
    return 0;
}
