#include <bits/stdc++.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        int temp, ans = 0;

        while(n--) {
            scanf("%d", &temp);
            ans ^= temp;
        }

        printf("%d\n", ans);
    }

    return 0;
}
