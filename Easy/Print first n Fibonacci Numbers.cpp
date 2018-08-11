#include <bits/stdc++.h>
#define SIZE 100

using namespace std;

unsigned long long fibo[SIZE];

void f() {
    fibo[0] = 1;
    fibo[1] = 1;

    for(int i = 2; i < SIZE; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

int main()
{
    int T;
    f();

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        for(int i = 0; i < n; i++) {
            printf("%llu ", fibo[i]);
        }
        putchar('\n');
    }

    return 0;
}
