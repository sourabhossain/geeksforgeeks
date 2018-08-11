#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int a, b, count = 0;
        
        scanf("%d%d", &a, &b);
        
        if(a > b) {
            swap(a, b);
        }
        
        for(int i = 1; i <= a; i++) {
            if(a % i == 0 && b % i == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    
	return 0;
}