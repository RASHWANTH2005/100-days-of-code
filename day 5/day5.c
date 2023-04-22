#include <stdio.h>

int main(void)
{
    int t,i;
    auto int n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int count=0;
        while(n!=0)
        {
            if((n%10)==4)
            {
                count++;
            }
            n=n/10;
        }
        printf("%d\n",count);
    }
	return 0;
}
