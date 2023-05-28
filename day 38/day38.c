#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int C, X, Y;
        scanf("%d %d %d", &C, &X, &Y);

        int r = C - X;
        int m = r > 0 ? (r * Y) : 0;
        printf("%d\n", m);
    }

    return 0;
}
