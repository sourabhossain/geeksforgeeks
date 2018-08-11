#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int m, n;
        
        scanf("%d%d", &m, &n);
        
        set <int> s;
        int temp;
        
        while(m--) {
            scanf("%d", &temp);
            s.insert(temp);
        }
        
        while(n--) {
            scanf("%d", &temp);
            s.insert(temp);
        }
        
        for(set <int>::iterator it = s.begin(); it != s.end(); it++) {
            cout << *it << " ";
        }
        putchar('\n');
    }
    
	return 0;
}