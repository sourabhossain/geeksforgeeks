#include <stdio.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        unsigned int n;
        
        scanf("%u", &n);
        printf("%u\n", ~n);
    }
    
    return 0;
}