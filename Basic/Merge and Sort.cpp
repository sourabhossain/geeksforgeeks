#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        set <int> s;
        
        while(n--) {
            int t, temp;
            
            scanf("%d", &t);
            
            while(t--) {
                scanf("%d", &temp);
                s.insert(temp);
            }
        }
        
        for(set <int>::iterator it = s.begin(); it != s.end(); it++) {
            cout << *it << " ";
        }
        putchar('\n');
    }
    
	return 0;
}