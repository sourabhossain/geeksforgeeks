#include <stdio.h>

int main() 
{
    int testCase;
    
    scanf("%d", &testCase);
    
    while(testCase--) {
        long long n;
        
        scanf("%lld", &n);
        
        int temp = 9;
        while(n) {
            if(temp < (n % 10)) {
                printf("0\n");
                break;
            }
            
            temp = n % 10;
            n /= 10;
        }
        
        if(n == 0) {
            printf("1\n");
        }
    }
    
	return 0;
}