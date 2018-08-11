#include <bits/stdc++.h>
#define SIZE 100002

using namespace std;

char isPrime[SIZE];

void prime() {
    isPrime[0] = 1;
    isPrime[1] = 1;
    for(int i = 4; i < SIZE; i += 2) {
        isPrime[i] = 1;
    }

	int root = sqrt(SIZE);

	for(int i = 3; i <= root; i += 2) {
        if(!isPrime[i]) {
            for(int j = i * i; j < SIZE; j += i << 1) {
                isPrime[j] = 1;
            }
        }
	}
}

int main()
{
    prime();
    int T;

    scanf("%d", &T);

    while(T--) {
        int n, k, temp;
        map <int, int> m;

        scanf("%d%d", &n, &k);

        while(n--) {
            scanf("%d", &temp);
            m[temp]++;
        }

        set <int> s;

        for(map <int, int>::iterator it = m.begin(); it != m.end(); it++) {
            if(!isPrime[it->second] && it->second >= k) {
                s.insert(it->first);
            }
        }

        if(s.size()) {
            for(set <int>::iterator it = s.begin(); it != s.end(); it++) {
                cout << *it << " ";
            }
            putchar('\n');
        }
        else {
            puts("-1");
        }
    }

	return 0;
}
