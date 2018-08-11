#include <stdio.h>

int gcd(int a, int b) {
    int temp;
    
    while(b) {
        temp = b;
        b = a % b;
        a = temp;
    } 
    
    return a;
}

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n, arr[100];
        
        scanf("%d", &n);
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int GCD = arr[0];
        
        for(int i = 1; i < n; i++) {
            GCD = gcd(GCD, arr[i]);
        }
        printf("%d\n", GCD);
    }
    
    return 0;
}