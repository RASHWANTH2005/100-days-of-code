#include <stdio.h>

int main(void)
{
	int T;	
	int a,b;
	
	scanf("%d",&T);
	while(T>0)
	{
	    scanf("%d %d",&a,&b);
	    if (a%3==0 || b%3==0)
	    {
	        printf("0 \n");
	    }
	    else if(abs(a-b)%3==0)
	    {
	        printf("1 \n");
	    }
	    else printf("2 \n");
	    T--;
	}
	return 0;
}

