#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    
    scanf("%d", &testCase);
    
    while(testCase--) {
        string s;
        
        cin >> s;
        
        if(s[0] >= 'a' && s[0] <= 'z') {
           for(int i = 1; s[i]; i++) {
               if(s[i] >= 'A' && s[i] <= 'Z') {
                   s[i] += 32;
               }
           }
        }
        else {
            for(int i = 1; s[i]; i++) {
                if(s[i] >= 'a' && s[i] <= 'z') {
                    s[i] -= 32;
                }
            }
        }
        cout << s << endl;
    }
    
	return 0;
}