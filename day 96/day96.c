#include <stdio.h>



int main(void)
{

	int K,N,i,j,l,c;
	scanf("%d%d",&K,&N);
	char S[K][51];
	for(j=0;j<K;j++)
	{
	    scanf("%s",S[j]);
	}
	for(j=0;j<N;j++)
	{
	    char S1[51];
	    scanf("%s",S1);
	    c=0;
	    for(i=0;i<K;i++)
	    {
	        for(l=0;S1[l]!='\0';l++)
	        {
	            if(strstr(&S1[l],S[i])==&S1[l])
	            {
	                printf("Good\n");
	                c=1;
	                break;
	            }
	        }
	        if(c==1)
	            break;
	    }
	    if(c==0){
	        if(strlen(S1)>=47)
	            printf("Good\n");
	        else
	            printf("Bad\n");
	        
	    }
	}
	return 0;
}
