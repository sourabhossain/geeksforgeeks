#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int temp, maxNumber = -1000000;
        
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