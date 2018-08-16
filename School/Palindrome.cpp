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
    int T, n;
    
    scanf("%d", &T);
    
    while(T--) {
        scanf("%d", &n);
        
        if(n == reverse(n)) {
            puts("Yes");
        } else {
            puts("No");
        }
    }
    
	return 0;
}