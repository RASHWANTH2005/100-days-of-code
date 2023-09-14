#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, h;
        scanf("%d %d", &x, &h);
        int ans = 0; 
        int i = 0;  
        while (h > 0 && i < 5)
        {
            h = h - (x / 2);
            ans++;
            i++;
        }
        while (h > 0)
        {
            h = h - x;
            ans++;
        }
        printf("%d\n", ans); 
    }

    return 0;
}


