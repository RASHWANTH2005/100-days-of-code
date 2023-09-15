#include <stdio.h>
#include <math.h>

int main() 
{
    int T, N, A, B, i;
    scanf("%d", &T);

    for (i = 0; i < T; i++) 
    {
        scanf("%d %d %d", &N, &A, &B);

        int x = 2 * (180 + N);
        int y = A + B;
        int z = x - y;

        printf("%d\n", z);
    }

    return 0;
}
