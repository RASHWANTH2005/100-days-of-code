#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int e,k;
        int c=0;
        scanf("%d %d",&e,&k);
        while(e!=0)
        {
            e=e/k;
            c++;
        }
        printf("%d\n",c);
    }
	return 0;
}
