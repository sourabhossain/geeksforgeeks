#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n, d;

        scanf("%d%d", &n, &d);

        deque <int> arr;
        int temp;

        while(n--) {
            scanf("%d", &temp);
            arr.push_back(temp);
        }

        while(d--) {
            temp = *(arr.begin());
            arr.pop_front();
            arr.push_back(temp);
        }

        for(deque <int>::iterator it = arr.begin(); it != arr.end(); it++) {
            cout << *it << " ";
        }
        putchar('\n');
    }

    return 0;
}
