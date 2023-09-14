#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int s[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &s[i]);
            sum = sum + s[i];
        }
        if (sum % 2 == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

