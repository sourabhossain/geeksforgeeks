#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, temp;
    
    scanf("%d", &T);
    
    while(T--) {
        scanf("%d", &n);
        int ans = 0;
        
        while(n--) {
            scanf("%d", &temp);
            ans ^= temp;
        }
        
        printf("%d\n", ans);
    }
    
	return 0;
}