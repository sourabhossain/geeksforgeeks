#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[2001];
        char word[501][2001];
        int j = 0, c = 0;

        scanf("%s", s);

        for(int i = 0; s[i]; i++) {
            if(s[i] == '.') {
                word[c++][j++] = '\0';
                j = 0;
            }
            else {
                word[c][j++] = s[i];
            }
        }

        if(j) {
            word[c][j] = '\0';
        }

        while(c >= 0) {
            printf("%s", word[c]);

            if(c > 0) {
                putchar('.');
            }
            c--;
        }
        putchar('\n');
    }

	return 0;
}
