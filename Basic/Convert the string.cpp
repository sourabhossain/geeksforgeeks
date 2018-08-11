#include <bits/stdc++.h>

bool notvowel(char c) {
    c = toupper(c);
    return (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U');
}

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[100001];
        
        scanf("%s", s);
        
        for(int i = 0; s[i]; i++) {
            if(notvowel(s[i])) {
                if(s[i] >= 'A' && s[i] <= 'Z') {
                    printf("#%c", s[i] + 32);
                }
                else {
                    printf("#%c", s[i] - 32);
                }
            }
        }
        putchar('\n');
    }
    
    return 0;
}