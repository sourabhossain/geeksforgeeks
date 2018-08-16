#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int max = INT_MIN, sum = 0, temp;
        
        while(n--) {
            scanf("%d", &temp);
            sum += temp;
            
            if(max < sum) {
                max = sum;
            }
            
            if(sum < 0) {
                sum = 0;
            }
        }
        printf("%d\n", max);
    }
    
	return 0;
}