#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    int c = 1;

    while(n) {
        c *= n--;
    }

    return c;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        int sum = 0, temp = n;

        while(n) {
            sum += f(n % 10);
            n /= 10;
        }

        if(temp == sum) {
            puts("Strong");
        }
        else {
            puts("Not Strong");
        }
    }

    return 0;
}
