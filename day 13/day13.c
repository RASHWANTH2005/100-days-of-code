#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int x = 0;
        if (c % a == 0)
        {
            x += c / a;
        }
        else
        {
            x += c / a + 1;
        }
        if (d % b == 0)
        {
            x += d / b;
        }
        else
        {
            x += d / b + 1;
        }
        printf("%d\n", x);
    }
    return 0;
}
