#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        vector <int> positive, negative;
        int temp;
        
        while(n--) {
            scanf("%d", &temp);
            
            if(temp < 0) {
                negative.push_back(temp);
            }
            else {
                positive.push_back(temp);
            }
        }
        
        for(int i = 0, negativeSize = negative.size(); i < negativeSize; i++) {
            printf("%d ", negative[i]);
        }
        
        for(int i = 0, positiveSize = positive.size(); i < positiveSize; i++) {
            printf("%d ", positive[i]);
        }
        putchar('\n');
    }
    
	return 0;
}