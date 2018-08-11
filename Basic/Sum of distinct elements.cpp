#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int temp;
        set <int> s;
        
        while(n--) {
            scanf("%d", &temp);
            s.insert(temp);
        }
        
        int sum = 0;
        
        for(set <int>::iterator it = s.begin(); it != s.end(); it++) {
            sum += *it;
        }
        
        printf("%d\n", sum);
    }
    
    return 0;
}