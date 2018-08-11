#include <stdio.h>

int main() 
{
    int testCase;
    
    scanf("%d", &testCase);
    
    while(testCase--) {
        int n, temp, maxNumber = 0;
        
        scanf("%d", &n);
        
        while(n--) {
            scanf("%d", &temp);
            
            if(temp > maxNumber) {
                maxNumber = temp;
            }
        }
        printf("%d\n", maxNumber);
    }
    
	return 0;
}