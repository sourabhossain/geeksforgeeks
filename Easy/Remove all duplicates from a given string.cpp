#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[101];
        
        scanf("%s", s);
        
        for(int i = 0; s[i]; i++) {
            char c = s[i];
            bool ck = true;
            
            for(int j = i - 1; j >= 0; j--) {
                if(s[i] ==  s[j]) {
                    ck = false;
                    break;
                }
            }
            
            if(ck) {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }
    
	return 0;
}