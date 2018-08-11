#include <stdio.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int max = -1, min = 101, temp;
        
        while(n--) {
            scanf("%d", &temp);
            
            if(max < temp) {
                max = temp;
            }
           
           if(min > temp) {
                min = temp;
            }
        }
        
        printf("%d %d\n", max, min);
    }
    
    return 0;
}