#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);
        vector <int> v(n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }

        int k1, k2, sum = 0;

        scanf("%d%d", &k1, &k2);
        sort(v.begin(), v.end());

        k2--;
        for(int i = k1; i < k2; i++) {
            sum += v[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}
