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

        sort(v.begin(), v.end());
        int minimum = 100000;

        for(int i = 1, temp; i < n; i++) {
            temp = v[i] - v[i - 1];

            if(minimum > temp) {
                minimum = temp;
            }
        }
        printf("%d\n", minimum);
    }

    return 0;
}
