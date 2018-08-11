#include <bits/stdc++.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        int temp, missingNumber = n * (n + 1) / 2;

        while(--n) {
            scanf("%d", &temp);
            missingNumber -= temp;
        }

        printf("%d\n", missingNumber);
    }

    return 0;
}
