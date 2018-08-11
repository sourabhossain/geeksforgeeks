#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    
    while(T--) {
        int n;
        scanf("%d", &n);
        
        int i = 0;
        char binary[14];
        
        while(n) {
            binary[i++] = n & 1;
            n >>= 1;
        }
        
        while(i < 15) {
            binary[i++] = 0;
        }
        
        for(i = 13; i >= 0; i--) {
            printf("%d", binary[i]);
        }
        putchar('\n');
    }
    
    return 0;
}