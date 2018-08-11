#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char a[101], b[101];
        
        scanf("%s%s", a, b);
        
        for(int  i= 0;  a[i]; i++) {
            bool ck = true;
            
            for(int j = 0; b[j]; j++) {
                if(a[i] == b[j]) {
                    ck = false;
                    break;
                }
            }
            
            if(ck) {
                putchar(a[i]);
            }
        }
        putchar('\n');
        
    }
    
	return 0;
}