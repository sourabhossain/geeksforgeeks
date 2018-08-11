#include <stdio.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int temp, ans = 1;
        
        while(n--) {
            scanf("%d", &temp);
            ans &= temp;
        }
        printf("%d\n", ans);
    }
    
    return 0;
}