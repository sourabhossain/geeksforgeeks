#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        set <long long> s;
        long long temp;
        
        while(n--) {
            scanf("%lld", &temp);
            
            if(temp < 0) {
                temp = -temp;
            }
            
            s.insert(temp);
        }
        
        printf("%d\n", (int)s.size());
    }
    
	return 0;
}