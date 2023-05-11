#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[1000];
        scanf("%s", s);
        int n = strlen(s);
        int count = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' ||s[i+1] == 'u') && (s[i+2] == 'a' || s[i+2] == 'e' || s[i+2] == 'i' || s[i+2] == 'o' || s[i+2] == 'u'))
                  {
                     count++;
                     break;
                  }
        }
        if(count==1)
        {
            printf("Happy\n");
        }
        else
        {
            printf("Sad\n");
        }
    }
    return 0;
}
