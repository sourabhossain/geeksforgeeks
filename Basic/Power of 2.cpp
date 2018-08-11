#include <bits/stdc++.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        unsigned long long n;

        scanf("%llu", &n);

        double ck = log2(n);

        if((int)ck == ck) {
            puts("YES");
        }
        else {
            puts("NO");
        }
    }

    return 0;
}
