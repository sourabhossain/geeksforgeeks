#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int testCase;
    
    scanf("%d", &testCase);
    
    while(testCase--) {
        char s[101];
        
        scanf("%s", s);
        
        int i;
        map <char, int> m;
        
        for(i = 0; s[i]; i++) {
            m[s[i]]++;
            
            if(m[s[i]] == 2) {
                puts("0");
                break;
            }
        }
        
        if(i == strlen(s)) {
            puts("1");
        }
    }
    
    return 0;
}