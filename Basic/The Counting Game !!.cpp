#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        string s;
        
        cin >> s;
        int count = 1;
        
        for(int i = 0; s[i]; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                count++;
            }
        }
        printf("%d\n", count);
    }
    
    return 0;
}