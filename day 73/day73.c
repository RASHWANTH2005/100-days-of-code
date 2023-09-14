#include <stdio.h>

int main(void) {
	// your code goes here
	int T,t,e,mT,mN,sum;
	scanf("%d",&T);
	while(T--) 
	{
	    scanf("%d %d %d",&mT,&mN,&sum);
	    t=0;e=1;
	    while(e<=mT&&sum!=0)
	    {
	        if(sum>=mN)
	        {
	            t=t+mN*mN;
	            sum=sum-mN;
	        }
	        else
	        {
	            t=t+sum*sum;
	            sum=sum-sum;
	        }
	        e++;
	    }
	    printf("\n%d",t);
	}
	return 0;
}
