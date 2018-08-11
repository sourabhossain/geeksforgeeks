#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        long long n;
        unsigned long long d = 0;
        
        scanf("%lld", &n);
        
        while(n > 0) {
            d += (n * 2);
            n = floor(n / 2);
        }
        printf("%llu\n", d);
    }
    
	return 0;
}