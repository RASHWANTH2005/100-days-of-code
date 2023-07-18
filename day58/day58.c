#include <stdio.h>
#include<string.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char c[10000];
		int i=0,l,count=0;
	    scanf("%s",&c);
		l=strlen(c);


		while(i!=l)
		{
	    
	    
	    if(c[i]=='1' && c[i+1]=='0' &&  c[i+2]=='1'|| c[i]=='0' && c[i+1]=='1' && c[i+2]=='0')
		{
	    printf("Good");
		count=1;

		break;
		}
	    
		i++;

		}
		if(count!=1)
		{
		printf("Bad");
		}
	    
	    printf("\n");
	}
	return 0;
}
