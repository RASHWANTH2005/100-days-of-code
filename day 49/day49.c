#include <stdio.h>

int main(void)
{
    int r;
    scanf("%d",&r);
    while(r--)
    {
        int l;
        scanf("%d",&l);
        char s[l];
        scanf("%s",s);
        int count=0;
        int i;
        for( i=0;i<l;i++)
        {
            if(s[i]=='.')
            {
                continue;
            }
            else if(s[i]=='H')
            {
                count++;
            }
            else if(s[i]=='T' && count==1)
            {
                count=0;
            }
            else
            {
                break;
            }
        }
       
        if(i==l && count==0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
return 0;
}
