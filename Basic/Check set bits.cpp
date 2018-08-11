#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        while(n) {
            if(!(n & 1)) {
                puts("NO");
                break;
            }
            
            n >>= 1;
        }
        
        if(n == 0) {
            puts("YES");
        }
    }
    
	return 0;
}