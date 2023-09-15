#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int P[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &P[i]);
        }

        int groupSizes[N + 1];
        for (int i = 0; i <= N; i++) {
            groupSizes[i] = 0;
        }

        for (int i = 0; i < N; i++) {
            groupSizes[P[i]]++;
        }

        int remainingPeople = 0;
        for (int i = 1; i <= N; i++) {
            remainingPeople += groupSizes[i] % i;

            if (remainingPeople > 0) {
                printf("NO\n");
                break;
            }
        }

        if (remainingPeople == 0) {
            printf("YES\n");
        }
    }

    return 0;
}
