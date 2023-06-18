#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                count++;
            }
        }
       
        printf("%d\n",count);
    }
return 0;
}
