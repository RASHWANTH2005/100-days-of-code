#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        int z = x < n - x ? x : n - x;

        printf("%d\n", z);
    }

    return 0;
}
