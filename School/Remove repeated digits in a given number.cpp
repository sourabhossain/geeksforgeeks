#include <bits/stdc++.h>

int main() 
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[101];
        
        scanf("%s", s);
        
        putchar(s[0]);
        
        for(int i = 1; s[i]; i++) {
            if(s[i - 1] != s[i]) {
                putchar(s[i]);
            }
        }
        
        putchar('\n');
    }
    
	return 0;
}