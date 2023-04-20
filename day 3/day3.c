#include <stdio.h>

int main(void)
{
    int t,i,x,y,z,q,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        q=x/y;
        r=x%y;
        if(x<y)
        {
            printf("%d\n",z);
        }
        else
        {
            if(r<2)
            {
                printf("%d\n",z*(q+r));   
            }
            else
            {
                printf("%d\n",z*(q+1));
            }
        }
    }
	return 0;
}
