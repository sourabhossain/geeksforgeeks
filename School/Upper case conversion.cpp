#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    string s;
    
    scanf("%d ", &T);
    
    while(T--) {
        getline(cin, s);
        s[0] = toupper(s[0]);
        
        for(int i = 1; s[i]; i++) {
            if(s[i - 1] == ' ') {
                s[i] = toupper(s[i]);
            }
        }
        printf("%s\n", s.c_str());
    }
    
	return 0;
}