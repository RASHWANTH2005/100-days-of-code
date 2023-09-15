#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        
        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1' && s[i+1]=='1')
            {
                count = 2;
                break;
            }
            else if(s[i]=='1')
            {
                count = 1;
            }
        }
        if(count==2) printf("2\n");
        else if(count ==1) printf("1\n");
        else printf("0\n");
	}
	return 0;
}

