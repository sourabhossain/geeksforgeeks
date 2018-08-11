#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        int temp;
        map <int, int> m;

        while(n--) {
            scanf("%d", &temp);
            m[abs(temp)]++;
        }

        bool ck = true;

        for(map <int, int>::iterator it = m.begin(); it != m.end(); it++) {
            if(it->second == 2) {
                printf("%d %d ", -(it->first), it->first);
                ck = false;
            }
        }

        if(ck) {
            putchar('0');
        }
        putchar('\n');
    }

    return 0;
}
