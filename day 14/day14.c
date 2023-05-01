#include <stdio.h>

int main(void)
{
    int t,n,k,i,j,x;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d", &n, &k);
        int h[n];
        int count=0;
        for (x = 0; x < n; x++)
        {
            scanf("%d", &h[x]);
        }
        for (j = 0; j < n; j++)
        {
            if (h[j] > k)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
