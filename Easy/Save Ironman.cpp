#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string& s) {
    string ans = "";
    
    for(int i = 0; s[i]; i++) {
        s[i] = tolower(s[i]);
        
        if(isalnum(s[i])) {
            ans += s[i];
        }
    }
    
    int length = ans.size();
    
    for(int i = 0; i < length; i++) {
        if(ans[i] != ans[--length]) {
            return false;
        }
    }
    
    return true;
}

int main()
{
    int T;
    string s;

    scanf("%d ", &T);

    while(T--) {
        getline(cin, s);

        if(isPalindrome(s)) {
            puts("YES");
        } else {
            puts("NO");
        }
    }

	return 0;
}