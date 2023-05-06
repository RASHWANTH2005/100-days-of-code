#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t); 
    while (t--)
    {
        char a[5], b[5], m[5];
        scanf("%s %s", a,b);
        for (int i = 0; i < 5; i++)
        {
            if (a[i] == b[i])
            {
                m[i] = 'G'; 
            } else {
                m[i] = 'B'; 
            }
        }
        m[5] = '\0';
        printf("%s\n", m);
    }
    return 0;
}
