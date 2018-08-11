#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[10001];
        int n;
        
        scanf("%d%s", &n, s);
        
        if(s[n - 1] & 1) {
            puts("ODD");
        }
        else {
            puts("EVEN");
        }
    }
    
	return 0;
}