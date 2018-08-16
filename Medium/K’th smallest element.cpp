#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        vector <int> data(n);
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &data[i]);
        }
        
        scanf("%d", &n);
        sort(data.begin(), data.end());
        printf("%d\n", data[n - 1]);
    }
    
	return 0;
}