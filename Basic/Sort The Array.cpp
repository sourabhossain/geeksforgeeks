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
        sort(v.begin(), v.end());
        
        for(int i = 0; i < n; i++) {
            printf("%d", v[i]);
            
            if(i + 1 != n) {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    
    return 0;
}