#include <bits/stdc++.h>

using namespace std;

int nod_number(int n) {
    set <int> nod;
    int root = sqrt(n);

    nod.insert(1);

    for(int i = 2; i <= root; i++) {
        if(!(n % i)) {
            nod.insert(i);
            nod.insert(n / i);
        }
    }

    n = 0;
    for(set <int>::iterator it = nod.begin(); it != nod.end(); ++it) {
        n += *it;
    }

    return n;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        if(n != 1 && nod_number(n) == n) {
            puts("1");
        }
        else {
            puts("0");
        }
    }

    return 0;
}
