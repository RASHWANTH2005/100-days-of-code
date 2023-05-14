#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int score1 = 0, score2 = 0;
        for(int i=1; i<=10; i++)
        {
            int goal;
            scanf("%d", &goal);
            if(i % 2 == 1)
            {
                score1 += goal;
            }
            else
            { 
                score2 += goal;
            }
        }
        if(score1 == score2)
        { 
            printf("0\n");
        } else if(score1 > score2)
        {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }
    return 0;
}
