#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int count = 0;
        int n;
        scanf("%d", &n);
        char a[n];
        scanf("%s", a);
        for (int j = 0; j <n; j++)
        {
            if (a[j] == '5' || a[j] == '0')
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("No\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}
