#include <bits/stdc++.h>

using namespace std;

unsigned int d(char c[]) {
    unsigned int decimal = 0;
    int base = 0;

    for(int i = 0; i < 32; i++) {
        decimal += (c[i] << base++);
    }

    return decimal;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        unsigned int x;
        char c[32] = {0};

        scanf("%u", &x);

        for(int i = 31; x; i--) {
            c[i] = x & 1;
            x >>= 1;
        }

        printf("%u\n", d(c));
    }

    return 0;
}
