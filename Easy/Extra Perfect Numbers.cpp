#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int c = 0, t = 1;
        
        while(n >= (t + 1)) {
            t <<= 1;
            c++;
        }
        printf("%d\n", c);
    }
    
	return 0;
}