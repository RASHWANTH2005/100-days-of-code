#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[100];
        scanf("%s",s);
        int l=strlen(s);
        int count=0,temp=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            else
            {
                temp++;
            }
        }
        if(count>temp)
        {
            printf("WIN\n");
        }
        else
        {
            printf("LOSE\n");
        }
    }
return 0;
}
