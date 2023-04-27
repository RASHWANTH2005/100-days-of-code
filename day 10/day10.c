#include <stdio.h>
#include <string.h>

int main(void) {
	int t,count=0,flag=0,c;
	scanf("%d\n",&t);
	while(t--){
	    int n;
	    scanf("%d\n",&n);
	    char event[100];
	    count = 0;
	    flag = 0;
	    for(int i=0;i<n;i++){
	     scanf("%s",event);
	     c = strcmp("START38",event);
	     if(c==0){
	         count = count + 1;
	     }
	     else{
	         flag = flag + 1;
	     }
        }
	    printf("%d %d\n",count,flag);
	}
	return 0;
}
