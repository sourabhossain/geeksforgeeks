#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        for(int i = 1; i <= n; i++) {
            char b[15];
            int j = 0, temp = i;
            
            while(temp) {
                b[j++] = temp & 1;
                temp >>= 1;
            }
            
            for(j--; j >= 0; j--) {
                printf("%d", b[j]);
            }
            putchar(' ');
        }
        putchar('\n');
    }
    
	return 0;
}