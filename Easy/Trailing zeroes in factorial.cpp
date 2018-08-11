#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        int c = 0;
        
        while(n) {
            c += (n / 5);
            n = (n / 5);
        }
        
        printf("%d\n", c);
    }
    
	return 0;
}