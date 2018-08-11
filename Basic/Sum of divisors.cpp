#include <stdio.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int sum = 1, temp = n / 2;
        
        for(int i = 2; i <= temp; i++) {
            if(n % i == 0) {
                sum += i;
            }
        }
        
        printf("%d\n", sum);
    }
    
    return 0;
}