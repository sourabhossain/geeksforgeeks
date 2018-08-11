#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int temp, zero = 0;
        
        while(n--) {
            scanf("%d", &temp);
            
            if(!temp) {
                zero++;
            }
        }
        
        printf("%d\n", zero);
    }
    
	return 0;
}