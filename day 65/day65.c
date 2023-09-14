#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        printf("%ld\n",n*n/2);
    }
	return 0;
}
