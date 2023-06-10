#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[27];
    scanf("%s", s);
    int l = strlen(s);
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char w[12];
        scanf("%s", w);
        int v = strlen(w);
        int count = 0;

        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < l; j++)
            {
                if (s[j] == w[i])
                {
                    count++;
                    break;
                }
            }
        }

        if (count == v)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
