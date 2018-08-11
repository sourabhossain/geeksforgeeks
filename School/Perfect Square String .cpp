#include <stdio.h>
#include <math.h>

int main() 
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[1001];
        
        scanf("%s", s);
        
        unsigned long long sum = 0;
        
        for(int i = 0; s[i]; i++) {
            sum += s[i];
        }
        
        unsigned long long temp = sqrt(sum);
        
        if((temp * temp) == sum) {
            puts("1");
        }
        else {
            puts("0");
        }
    }
    
    return 0;
}