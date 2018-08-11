#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d ", &T);

    while(T--) {
        char s[1001];
        bool c = true;

        gets(s);

        for(int i = 0; s[i]; i++) {
            if(s[i] == ' ') {
                while(s[i + 1] == ' ') {
                    ++i;
                }

                c = true;
            }
            else if(s[i] >= 'a' && s[i] <= 'z' && c) {
                putchar(s[i]);
                c = false;
            }
        }
        putchar('\n');
    }

	return 0;
}
