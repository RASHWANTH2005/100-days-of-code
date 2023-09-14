#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],u=0;
        int count[1000001]={0};
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            count[a[i]]++;
            if(u<count[a[i]])
            {
                u=count[a[i]];
            }
        }
        printf("%d\n",n-u);
    }
    return 0;
}
