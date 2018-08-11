#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char str[1001], s[1001];

        scanf("%s%s", str, s);
        bool ck = true;

        for(int i = 0, len = strlen(s); str[i]; i++) {
            if(str[i] == s[0]) {
                int j;

                for(j = 1; j < len && s[j] == str[i + j]; j++);

                if(j == len && ck) {
                    putchar('X');
                    i += (j - 1);
                    ck = false;
                }
                else if(j == len) {
                    i += (j - 1);
                }
                else {
                    putchar(str[i]);
                    ck = true;
                }
            }
            else {
                putchar(str[i]);
                ck = true;
            }
        }
        putchar('\n');
    }

    return 0;
}
