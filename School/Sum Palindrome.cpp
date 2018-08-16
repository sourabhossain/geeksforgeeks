#include <bits/stdc++.h>

using namespace std;

int reverse(int n) {
    int r = 0;
    
    while(n) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    
    return r;
}


int main()
{
    int n, T;
    
    scanf("%d", &T);
    
    while(T--) {
        scanf("%d", &n);
        bool ck = true;
        
        for(int i = 0; i <= 5; i++) {
            if(n == reverse(n)) {
                printf("%d\n", n);
                ck = false;
                break;
            }
            
            n += reverse(n);
        }
        
        if(ck) {
            puts("-1");
        }
    }
    
	return 0;
}