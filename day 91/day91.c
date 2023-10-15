#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    int max=0, c,k=0;
	    for(int i=0; i<n; i++)
	    {
	        c=0; 
	        for(int j=i+1; j<n; j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                c++;
	            }
	        }
	        if(c>max)
	        {
	            max=c;
	            k = 1;
	        }
	        else if(c==max)
	        {
	            k=0;
	        }
	    }
	    if(k==1)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

