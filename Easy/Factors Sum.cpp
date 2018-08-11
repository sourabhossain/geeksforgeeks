#include <bits/stdc++.h>

using namespace std;

int nod_number(int n) {
    set <int> nod;
    int root = sqrt(n);

    nod.insert(1);
    nod.insert(n);

    for(int i = 2; i <= root; i++) {
        if(!(n % i)) {
            nod.insert(i);
            nod.insert(n / i);
        }
    }

    int sum = 0;

    for(set <int>::iterator it = nod.begin(); it != nod.end(); it++) {
        sum += *it;

    }

    return sum;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);
        printf("%d\n", nod_number(n));
    }

	return 0;
}
