#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int i = 1, x = 0;
        while (1)
        {
            if (n < i)
                break;
            x++;
            i += x + 1;
        }
        printf("%d\n", x);
    }
    return 0;
}
