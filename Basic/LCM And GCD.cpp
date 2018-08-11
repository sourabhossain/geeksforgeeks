#include <stdio.h>

int gcd(int a, int b) {
    int T;
    
    while(b) {
        T = b;
        b = a % b;
        a = T;
    } 
    
    return a;
}

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int a, b;
        
        scanf("%d%d", &a, &b);
        int temp = gcd(a, b);
        printf("%d %d\n", (a * b) / temp, temp);
    }
    
    return 0;
}