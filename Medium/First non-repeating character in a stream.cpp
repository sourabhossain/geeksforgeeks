#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;
    char c;

    scanf("%d", &T);

    while(T--) {
        scanf("%d ", &n);

        map <char, int> m;
        vector <char> v;

        while(n--) {
            scanf(" %c", &c);

            m[c]++;

            if(m[c] > 1) {
                vector <char>::iterator it = find(v.begin(), v.end(), c);

                if(it != v.end()) {
                    v.erase(it);
                }
            } else if(m[c] == 1) {
                v.push_back(c);
            }

            if(v.empty()) {
                printf("-1 ");
            } else {
                cout << v.front() << " ";
            }
        }
        putchar('\n');
    }

	return 0;
}
