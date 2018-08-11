#include <bits/stdc++.h>
#define SIZE 9

using namespace std;

int notes[SIZE] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        for(int i = 0; n; i++) {
            while(notes[i] <= n) {
                printf("%d ", notes[i]);
                n -= notes[i];
            }
        }
        putchar('\n');
    }

    return 0;
}
