#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,v1,v2;
    float a,b;
    scanf("%d%d%d",&n,&v1,&v2);
    a=(float)(2*n)/(float)v2;
    b=(float)(n*1.41)/(float)v1;
    if(a<b)
        printf("Elevator\n");
    else
        printf("Stairs\n");
    }
    return 0;
}



