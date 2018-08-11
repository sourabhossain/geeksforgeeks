#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        unsigned long long f = 1;
        
        scanf("%d", &n);
        
        while(n > 1) {
            f *= n--;
        }
        printf("%llu\n", f);
    }
    
	return 0;
}