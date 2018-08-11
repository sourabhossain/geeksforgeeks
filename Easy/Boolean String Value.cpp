#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[1001];
        
        scanf("%s", s);
        
        char ans = s[0];
        
        for(int i = 1; s[i]; i++) {
            if(s[i] == 'A') {
                ++i;
                if(ans == '1' && s[i] == '1') {
                    ans = '1';
                }
                else {
                    ans = '0';
                }
            }
            else if(s[i] == 'B') {
                ++i;
                if(ans == '0' && s[i] == '0') {
                    ans = '0';
                }
                else {
                    ans = '1';
                }
            }
            else if(s[i] == 'C') {
                ++i;
                if((ans == '0' && s[i] == '1') || (ans == '1' && s[i] == '0')) {
                    ans = '1';
                }
                else {
                    ans = '0';
                }
            }
        }
        
        printf("%c\n", ans);
    }
    
	return 0;
}