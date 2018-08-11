#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        set <int> s;
        vector <int> v;

        s.insert(0);
        s.insert(n);

        for(int i = 1; i < n; i++) {
            s.insert(n & i);
        }

        for(set <int>::iterator it = s.begin(); it != s.end(); it++) {
            v.push_back(*it);
        }

        for(int i = v.size() - 1; i >= 0; i--) {
            printf("%d ", v[i]);
        }
        putchar('\n');
    }

	return 0;
}
