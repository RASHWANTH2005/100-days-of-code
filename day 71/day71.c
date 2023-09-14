#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        char r[n + 1];
        int count1 = 0, count2 = 0;

        scanf("%s", s);
        scanf("%s", r);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count1 += 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (r[i] == '1')
            {
                count2 += 1;
            }
        }

        if (count1 == count2)
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
