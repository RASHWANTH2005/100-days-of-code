#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
      {
         int a,b,c,d,D;
         scanf("%d %d %d %d %d",&D,&d,&a,&b,&c);
         if(d*D>=42)
         {
             printf("%d\n",c);
             
         }
         else if(d*D>=21&&d*D<42)
            printf("%d\n",b);
         else if(d*D>=10&&d*D<21)
            printf("%d\n",a);
         else
            printf("0\n");
    
    
}
	return 0;
}
