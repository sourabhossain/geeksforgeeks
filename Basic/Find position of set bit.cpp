#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        long long n;
        
        scanf("%lld", &n);
        
        int c = 0, t = 0;
        
        while(n && c < 1) {
            if(n & 1) {
                c++;
            }
            
            t++;
            n >>= 1;
        }
        
        if(n == 0) {
            printf("%d\n", t);
        }
        else {
            puts("-1");
        }
    }
    
	return 0;
}