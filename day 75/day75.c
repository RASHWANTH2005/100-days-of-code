#include <stdio.h>
int main(void)\
{
	int t;
	scanf("%d",&t);
	while(t--){
	    int y; 
	    scanf("%d",&y);
	    if(y==0)
	    printf("1\n");
	    else
	    printf("%d\n",(y*3));
	}
	return 0;
}
