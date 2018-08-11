#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[1001];
        int c = 0;
        
        scanf("%s", s);
        
        for(int i = 0; s[i]; i++) {
            if(s[i] == ')') {
                c++;
            }
        }
        
        if(c) {
            printf("%d\n", c);
        }
        else {
            puts("-1");
        }
    }
    
	return 0;
}