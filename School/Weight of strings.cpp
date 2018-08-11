#include <stdio.h>
#include <string.h>

int main() 
{
    int weight[26];
    
    for(int i = 0; i < 27; i++) {
        weight[i] = i + 1; 
    }
    
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char a[1001], b[1001];
        
        scanf("%s%s", a, b);
        
        int sum1 = 0, sum2 = 0;
        
        for(int i = 0; a[i]; i++) {
            sum1 += weight[a[i] - 'a']; 
        }
        
        for(int i = 0; b[i]; i++) {
            sum2 += weight[b[i] - 'a']; 
        }
        
        if(sum1 > sum2) {
            puts("1");
        }
        else if(sum1 < sum2) {
            puts("2");
        }
        else {
            puts("equal");
        }
    }
    
	return 0;
}