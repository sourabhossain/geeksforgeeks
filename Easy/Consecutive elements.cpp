#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[101];

        scanf("%s", s);

        for(int i = 0; s[i]; i++) {
            putchar(s[i]);

            while(s[i] == s[i + 1]) {
                ++i;
            }
        }
        putchar('\n');
    }

    return 0;
}
