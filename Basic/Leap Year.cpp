#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        if(n % 100 != 0 && n % 4 == 0 || n % 400 == 0) {
            puts("Yes");
        }
        else {
            puts("No");
        }
    }
    
	return 0;
}