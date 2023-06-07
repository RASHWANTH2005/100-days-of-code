#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        if ((A + B) / 2 >= 35 && (B + C) / 2 >= 35 && (C + A) / 2 >= 35)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }

    return 0;
}
