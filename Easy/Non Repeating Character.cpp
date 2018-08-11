#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[101];
        int n, i;

        scanf("%d%s", &n, s);

        for(i = 0; i < n; i++) {
            bool ck = true;

            for(int j = i + 1; j < n; j++) {
                if(s[i] == s[j]) {
                    ck = false;
                    s[j] = -1;
                }
            }

            if(s[i] != -1 && ck) {
                printf("%c\n", s[i]);
                break;
            }
        }

        if(i == n) {
            puts("-1");
        }
    }

	return 0;
}
