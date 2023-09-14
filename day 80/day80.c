#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    int arr[a];
	    int max=b,sum=b;
	    for(int i=0;i<a;i++)
	    {
	    scanf("%d",&arr[i]);
	    sum+=arr[i];
	    if(max<sum)
	    max=sum;
	    }
	    printf("%d\n",max);
	    
	}
	return 0;
}



