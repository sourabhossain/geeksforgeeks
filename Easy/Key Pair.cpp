#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n, sum;
        
        scanf("%d%d", &n, &sum);
        vector <int> x(n);
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }
        
        bool ck = false;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j && x[i] + x[j] == sum) {
                    puts("Yes");
                    ck = true;
                    break;
                }
            }
            
            if(ck) {
                break;
            }
        }
        
        if(!ck) {
            puts("No");
        }
    }
    
	return 0;
}