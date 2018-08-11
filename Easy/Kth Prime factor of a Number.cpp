#include <bits/stdc++.h>

using namespace std;

int nod_prime(int n, int c) {
    if(n < 2) {
        return -1;
    }

    vector <int> v;

    while(!(n & 1)) {
        v.push_back(2);
        n >>= 1;
    }

    int root = sqrt(n);

    for(int i = 3; i <= root; i += 2) {
        while(!(n % i)) {
            v.push_back(i);
            n /= i;
        }
    }

    if(n > 2) {
        v.push_back(n);
    }

    if(v.size() >= c) {
        return v[c - 1];
    }
    else {
        return -1;
    }
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n, k;

        scanf("%d%d", &n, &k);
        printf("%d\n", nod_prime(n, k));
    }

    return 0;
}
