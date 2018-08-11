#include <stdio.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int c = 0;
        
        while(n) {
            if(n & 1) {
                c++;
            }
            
            n >>= 1;
        }
        
        if(c & 1) {
            puts("odd");
        }
        else {
            puts("even");
        }
    }
    
    return 0;
}