#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n, k, temp, count = 0;
        
        scanf("%d%d", &n, &k);
        
        while(n--) {
            scanf("%d", &temp);
            
            if(temp == k) {
                count++;
            }
        }
        
        if(count) {
            printf("%d\n", count);
        }
        else {
            puts("-1");
        }
    }
    
	return 0;
}