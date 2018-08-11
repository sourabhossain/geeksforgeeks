#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[15];

        scanf("%s", s);

        int len = strlen(s);

        if(len == 10 && (s[0] == '7' || s[0] == '8' || s[0] == '9')) {
            puts("Valid");
        }
        else if(len == 11 && s[0] == '0' && (s[1] == '7' || s[1] == '8' || s[1] == '9')) {
            puts("Valid");
        }
        else if(len == 12 && s[0] == '9' && s[1] == '1' && (s[2] == '7' || s[2] == '8' || s[2] == '9')) {
            puts("Valid");
        }
        else {
            puts("Invalid");
        }
    }

	return 0;
}
