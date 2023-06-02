#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int X;
        scanf("%d", &X); 

        int change = 100 - X;
        printf("%d\n", change);
    }

    return 0;
}
