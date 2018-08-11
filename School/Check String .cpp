#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;

    scanf("%d", &testCase);

    while(testCase--) {
        string s;
        cin >> s;

        set <char> c;
        for(int i = 0; s[i]; i++) {
            c.insert(s[i]);
        }

        if(c.size() == 1) {
            puts("YES");
        }
        else {
            puts("NO");
        }
    }

	return 0;
}

