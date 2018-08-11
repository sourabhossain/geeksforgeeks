#include <stdio.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int firstMax = 0, secondMax = 0, temp;
        
        while(n--) {
            scanf("%d", &temp);
            
            if(firstMax < temp) {
                secondMax = firstMax;
                firstMax = temp;
            }
            else if(secondMax < temp) {
                secondMax = temp;
            }
        }
        
        printf("%d\n", firstMax * secondMax);
    }
    
    return 0;
}