#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n, k;

        scanf("%d%d", &n, &k);
        vector <int> v(n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }
        sort(v.begin(), v.end());

        while(k--) {
            printf("%d ", v[--n]);
        }
        putchar('\n');
    }

    return 0;
}
