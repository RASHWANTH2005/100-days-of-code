#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (Y <= X)
        {
            printf("%d\n", Y);
        } else {
            printf("%d\n", X);
        }
    }

    return 0;
}
