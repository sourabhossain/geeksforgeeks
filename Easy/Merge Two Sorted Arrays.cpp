#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int x, y, temp;

        scanf("%d%d", &x, &y);
        int arraySize = x + y;
        vector <int> v;

        while(x--) {
            scanf("%d", &temp);
            v.push_back(temp);
        }

        while(y--) {
            scanf("%d", &temp);
            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        for(int i = arraySize - 1; i >= 0; i--) {
            printf("%d ", v[i]);
        }
        putchar('\n');
    }

	return 0;
}
