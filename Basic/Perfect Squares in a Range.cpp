#include <bits/stdc++.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int a, b;
        
        scanf("%d%d", &a, &b);
        
        int temp, c = 0;
        
        while(a <= b) {
            temp = sqrt(a);
            
            if((temp * temp) == a) {
                c++;
            }
            
            a++;
        }
        printf("%d\n", c);
    }
    
    return 0;
}