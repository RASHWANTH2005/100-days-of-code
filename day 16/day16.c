#include <stdio.h>

int main(void)
{
    int t,a,b,c,y,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        c=a+b;
        int count=0;
        while(c!=0)
        {
            y=c%10;
            if((y==0)||(y==6)||(y==9))
            {
                count=count+6;
            }
            else if(y==1)
            {
                count=count+2;
            }
            else if((y==2)||(y==3)||(y==5))
            {
                count=count+5;
            }
            else if(y==4)
            {
               count=count+4; 
            }
            else if(y==7)
            {
                count=count+3;
            }
            else if(y==8)
            {
                count=count+7;
            }
             c=c/10;
        }
        printf("%d\n",count);
    }
	return 0;
}

