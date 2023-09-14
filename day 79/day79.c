#include <stdio.h>

int main()
{
    int T,A,B,C,D;
    scanf("%d",&T);
    while(T-->0)
    { 
        scanf("%d %d %d %d",&A,&B,&C,&D);
        if(A+B+C<=D)
            printf("1\n");

        else if(A+B<=D)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
