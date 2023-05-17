#include<stdio.h>
int main()
{
    int T;
    int x,y,z,a;
    scanf("%d", &T);  
    while (T--)
    {
        
        scanf("%d %d", &x, &y);  
        
        z=2*y;
        a=x/z;
        printf("%d\n", a);
    }
    retsurn 0;
}
