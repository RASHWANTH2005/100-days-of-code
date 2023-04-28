#include <stdio.h>

int main(void)
{
    int t,l,r;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &l, &r);
    
        int count = 0;
        for (int i = l; i <= r; i++)
        {
           if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
           {
               count++;
           }
        }
        printf("%d\n", count);
    }
    return 0;
}
