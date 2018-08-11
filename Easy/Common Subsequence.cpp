#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char a[31], b[31];
        
        scanf("%s%s", a, b);
        bool ck = true;
        
        for(int i = 0; a[i]; i++) {
            for(int j = 0; b[j]; j++) {
                if(a[i] == b[j]) {
                   puts("1");
                   ck = false;
                   break;
                }
            }
            
            if(ck == false) {
                break;
            }
        }
        
        if(ck) {
            puts("0");
        } 
    }
    
	return 0;
}