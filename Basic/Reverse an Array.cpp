#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        vector <int> v(n);
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }
        
        for(int i = n - 1; i >= 0; i--) {
            printf("%d", v[i]);
            
            if(i > 0) {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    
    return 0;
}