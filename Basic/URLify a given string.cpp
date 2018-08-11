#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d ", &T);
    
    while(T--) {
        char s[1001];
        int length;
        
        scanf("%[^\n] %d ", s, &length);
        
        for(int i = 0; s[i]; i++) {
            if(s[i] == ' ') {
                while(s[i] == ' ') {
                    i++;
                }
                
                printf("%%20");
            }
            putchar(s[i]);
        }
        putchar('\n');
    }
    
	return 0;
}