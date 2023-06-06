#include <stdio.h>

int main(void)
{
    int t,R1,R2,R3,R4;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d", &R1,&R2,&R3,&R4);
        if((R1==1) || (R2==1) || (R3==1) || (R4==1))
        {
            printf("OUT\n");
        }
        else
        {
            printf("IN\n");
        }
    }
	return 0;
}
