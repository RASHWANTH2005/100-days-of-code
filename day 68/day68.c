#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[5];
        int p,sum=0;
        for(int i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
            sum = sum+a[i];
        }
        scanf("%d",&p);
        sum = sum*p;
        if(sum > 120)
            printf("Yes\n");
        else
            printf("No\n");
    }
	return 0;
}
