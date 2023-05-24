#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int X;
        scanf("%d", &X);

        int l = 0;

        while (X > 0)
        {
            if (X % 10 == 7)
            {
                l = 1;
                break;
            }
            X /= 10;
        }

        if (l==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
