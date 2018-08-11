#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int temp, n;
        vector <int> a, b;

        scanf("%d", &n);

        while(n--) {
            scanf("%d", &temp);

            if(temp >= 0) {
                a.push_back(temp);
            }
            else {
                b.push_back(temp);
            }
        }

        int i, aSize = a.size(), bSize = b.size();

        for(i = 0; i < aSize; i++) {
            printf("%d ", a[i]);

            if(i < bSize) {
                printf("%d ", b[i]);
            }
        }

        for(i; i < bSize; i++) {
            printf("%d ", b[i]);
        }
        putchar('\n');
    }

	return 0;
}
