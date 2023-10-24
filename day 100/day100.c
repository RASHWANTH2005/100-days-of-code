#include <stdio.h>

void luck()
{
    int n, k, v, nt=0;
    scanf("%d %d %d", &n, &k, &v);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        nt+=a[i];
    }
    int kt=0;
    kt=v*(n+k)-nt;
    if(kt<=0 || kt%k!=0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", kt/k);
    }
}

int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    luck();
	}
	
	return 0;
}

