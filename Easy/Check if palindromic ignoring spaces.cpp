#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(char s[]) {
	int Size = strlen(s), i;

	for(i = 0; i < Size; i++) {
		if(s[i] != s[--Size]) {
			return false;
		}
	}

	return true;
}

int main()
{
    int T;

    scanf("%d ", &T);

    while(T--) {
        char s[1001], c[1001];

        gets(s);

        int j = 0;

        for(int i = 0; s[i]; i++) {
            if(s[i] != ' ') {
                c[j++] = s[i];
            }
        }
        c[j] = '\0';

        if(is_palindrome(c)) {
            puts("YES");
        }
        else {
            puts("NO");
        }
    }

	return 0;
}
