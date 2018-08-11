#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[101], c[101];

        scanf("%s%s", s, c);
        int len = strlen(c);

        for(int i = 0; s[i]; i++) {
            if(s[i] == c[0]) {
                int j;

                for(j = 1; s[i + j] && c[j]; j++) {
                    if(s[i + j] != c[j]) {
                        break;
                    }
                }

                if(len == j) {
                    puts("found");
                    len = 0;
                    break;
                }
            }
        }

        if(len) {
            puts("not found");
        }
    }

    return 0;
}
