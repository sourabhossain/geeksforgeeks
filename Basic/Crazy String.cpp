#include <bits/stdc++.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[1001];

        scanf("%s", s);

        if(s[0] >= 'A' && s[0] <= 'Z') {
            for(int i = 1; s[i]; i++) {
                if(i & 1) {
                    s[i] = tolower(s[i]);
                }
                else {
                    s[i] = toupper(s[i]);
                }
            }
        }
        else {
            for(int i = 1; s[i]; i++) {
                if(i & 1) {
                    s[i] = toupper(s[i]);
                }
                else {
                    s[i] = tolower(s[i]);
                }
            }
        }

        puts(s);
    }

    return 0;
}
