#include <stdio.h>

int main()
{
    int T; 
    scanf("%d", &T);

    while (T--)
    {
        int N; 
        scanf("%d", &N);

        int p = 1000; 
        int q = 100;

        int total = N * p; 
        int notebooks = total / q;

        printf("%d\n", notebooks);
    }

    return 0;
}
