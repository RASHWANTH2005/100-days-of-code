#include <stdio.h>

int main(void)
{
    int p1, p2, p3, p4;
    int c = 0;

    scanf("%d %d %d %d", &p1, &p2, &p3, &p4);

    if (p1 >= 10) c++;
    if (p2 >= 10) c++;
    if (p3 >= 10) c++;
    if (p4 >= 10) c++;

    printf("%d\n", c);
	return 0;
}
