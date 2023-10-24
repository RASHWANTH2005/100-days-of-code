#include <stdio.h>

int main(void)
{
        int n,i;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
               break;
            }
        }
        printf("%d\n",n-i-1);
  
    
	return 0;
}
