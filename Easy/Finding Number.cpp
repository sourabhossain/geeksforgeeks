#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n, k, temp, i = 0, p;
        bool ck = true;
        
        scanf("%d%d", &n, &k);
         
        while(n--) {
            scanf("%d", &temp);
            
            if(ck && temp == k) {
                ck = false;
                p = i;
            }
            
            i++;
        } 
        
        if(ck) {
            puts("OOPS! NOT FOUND");
        }
        else {
            printf("%d\n", p);
        }
    }
    
	return 0;
}