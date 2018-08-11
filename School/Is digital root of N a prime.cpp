#include <stdio.h>

char isPrime[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0};

int main() 
{
    int testCase;
    
    scanf("%d", &testCase);
    
    while(testCase--) {
        int n;
        
        scanf("%d", &n);
        
        while(n > 9) {
            int sum = 0;
            
            while(n) {
                sum += (n % 10);
                n /= 10;
            }
            
            n = sum;
        }
        
        if(isPrime[n]) {
            puts("1");
        }
        else {
            puts("0");
        }
    }
    
	return 0;
}