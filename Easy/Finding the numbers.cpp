#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);
        map <long long, int> m;
        int arraySize = (n * 2) + 2;

        while(arraySize--) {
            scanf("%d", &n);
            m[n]++;
        }

        for(map <long long, int>::iterator it = m.begin(); it != m.end(); it++) {
            if(it->second & 1) {
                printf("%d ", it->first);
            }
        }
        putchar('\n');
    }

	return 0;
}
