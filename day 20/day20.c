#include <stdio.h>

int main(void)
{
    int t,i,j;
    scanf("%d",&t);
    char n[11];
    while(t--)
    {
        scanf("%s",n);
        i=0;
        j=strlen(n)-1;
        int count=0;
        while(i<j)
        {
            if(n[i]!=n[j])
            {
                count++;
                break;
            }
            i++;
            j--;
        }
        if(count>0)
        {
            printf("loses\n");
        }
        else
        {
            printf("wins");
        }
    }
	return 0;
}
