#include <stdio.h>
#include <string.h>

int main(void)
{
    int t,n;
    scanf("%d",&t);
    int max;
    for(int i=0;i<t;i++)
    {
        int count=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for(int j=0;j<n;j++)
        {
            if( s[j] == '1')
            {
                count++;
            }
        }
        int temp=n-count;
        if((count==0) || (temp==0))
        {
            max=0;
        }
        else if(count>temp)
        {
            max=temp;
        }
        else
        {
            max=count;
        }
       
        if(max==0)
        {
            printf("1\n");
        }
        else if(count==temp)
        {
            printf("%d\n",max*2);
        }
        else
        {
             printf("%d\n", (2*max)+1);
        }
       
    }
return 0;
}
