#include <stdio.h>

int main(void)\
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N,X;
	    scanf("%d %d\n",&N,&X);
	    char S[10001];
	    scanf("%s",S);
	    int minpos=X,maxpos=X,count=1;
	    for(int i=0;S[i];i++)
	    {
	        
	        if(S[i]=='R')
	        {
	            X++;
	        }
	        
	        else if(S[i]=='L')
	        {
	            X--;
	        }
	        
	        if(X<minpos)
	        {
	            count++;
	            minpos = X;
	        }
	        
	        else if(X>maxpos)
	        {
	            count++;
	            maxpos=X;
	        }
	        
	    }
	    printf("%d\n",count);
	    
	}
	return 0;
}

