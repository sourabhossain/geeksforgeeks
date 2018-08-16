#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, T;
    
    scanf("%d", &T);
    
    while(T--) {
        scanf("%d", &n);
        vector<int> v(n);
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }
        
        for(int i = 1; i < n; i++) {
            if(v[i - 1] > v[i]) {
                printf("%d ", v[i]);
            } else {
                printf("-1 ");
            }
        }
        puts("-1");
    }
    
	return 0;
}