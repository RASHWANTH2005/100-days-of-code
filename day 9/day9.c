#include <stdio.h>

int main(void)
{
    int n,i,j,a,b,x=0,y=0;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        x=x+a;
        y=y+b;
        s[i]=x-y;
    }
    for(j=0;j<n;j++)
    {
        if((abs(s[0]))<(abs(s[j])))
        {
            s[0]=s[j];
        }
    }
    if(s[0]>0)
    {
        printf("%d %d\n", 1 ,abs(s[0]));
    }
    else
    {
        printf("%d %d\n" ,2 ,abs(s[0]));
    }
	return 0;
}
