#include <bits/stdc++.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        int c = 0;

        for(int i = 2; i * i < n && c < 2; i++) {
            while(n % i == 0) {
                c++;
                n /= i;
            }
        }

        if(n > 1) {
            c++;
        }

        if(c == 2) {
            puts("True");
        }
        else {
            puts("False");
        }
    }

    return 0;
}
