#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        int temp, minValue = 2147483647;
        
        while(n--) {
            scanf("%d", &temp);
            
            if(temp < minValue) {
                minValue = temp;
            }
        }
        
        printf("%d\n", minValue);
    }
    
	return 0;
}