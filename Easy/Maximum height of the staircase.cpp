#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        int i;

        for(i = 1; (i * (i + 1) / 2) <= n; i++);

        printf("%d\n", i - 1);
    }

    return 0;
}
