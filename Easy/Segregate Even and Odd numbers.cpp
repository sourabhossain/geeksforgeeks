#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        vector <int> a, b;
        int temp;
        
        while(n--) {
            scanf("%d", &temp);
            
            if(temp & 1) {
                a.push_back(temp);
            }
            else {
                b.push_back(temp);
            }
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int arraySize = b.size();
        
        for(int i = 0; i < arraySize; i++) {
            printf("%d ", b[i]);
        }
        
        arraySize = a.size();
        
        for(int i = 0; i < arraySize; i++) {
            printf("%d ", a[i]);
        }
        putchar('\n');
    }
    
	return 0;
}