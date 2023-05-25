#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y); 
        
        if(x==y)
        {
            printf("0\n");
        }
        else
        {
            int z=y-x;
            int games = (z / 8);
            int v=z%8;
            if(v==0)
            {
                printf("%d\n", games);
            }
            else
            {
                printf("%d\n", games+1);
            }
            
            
        }
    }

    return 0;
}
