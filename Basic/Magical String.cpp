#include <stdio.h>

int main()
{
    char c[26];
    
    for(int i = 0; i < 26; i++) {
        c[i] = 'z' - i; 
    }
    
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[101];
        
        scanf("%s", s);
        
        for(int i = 0; s[i]; i++) {
            s[i] = c[s[i] - 'a']; 
        }
        printf("%s\n", s);
    }
    
    return 0;
}