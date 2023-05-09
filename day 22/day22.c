#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n,j,i, count = 0;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        
        for (j = 0; j < n-1; j++)
        {
            if (a[j] == a[j+1])
            {
                count++;
            }
        }
        printf("%d\n", n-count);
    }
    
    return 0;
}
