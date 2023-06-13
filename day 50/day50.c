#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[n],c[n];
        scanf("%s %s",s,c);
        int count=0,temp=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            if(c[i]=='1')
            {
                temp++;
            }
        }
       
        if(count==temp)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
return 0;
}
