#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        unsigned long long sum = 0;

        for(int i = 1; i <= n; i++) {
            sum += (i * i);
        }

        unsigned long long temp = n * (n + 1) / 2;
        printf("%llu\n", (temp * temp) - sum);
    }

    return 0;
}
