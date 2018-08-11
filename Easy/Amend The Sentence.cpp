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
            if(s[i] >= 'A' && s[i] <= 'Z') {
                if(i) {
                    putchar(' ');
                }

                putchar(s[i] + 32);
            }
            else {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }

	return 0;
}
