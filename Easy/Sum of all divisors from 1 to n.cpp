#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        long long sum = 0;
        
        scanf("%d", &n);
        
        for(int i = 1; i <= n; i++) {
            sum = sum + (n / i) * i;
        }
        
        printf("%lld\n", sum);
    }
    
	return 0;
}