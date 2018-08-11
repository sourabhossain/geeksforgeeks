#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        vector <int> even, odd;
        int temp;
        
        while(n--) {
            scanf("%d", &temp);
            
            if(temp & 1) {
                odd.push_back(temp);
            }
            else {
                even.push_back(temp);
            }
        }
        
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        
        for(int i = odd.size() - 1; i >= 0; i--) {
            printf("%d", odd[i]);
            
            if(i > 0) {
                putchar(' ');
            }
        }
        
        for(int i = 0, evenSize = even.size(); i < evenSize; i++) {
            if(i != evenSize) {
                putchar(' ');
            }
            
            printf("%d", even[i]);
        }
        putchar('\n');
    }
    
	return 0;
}