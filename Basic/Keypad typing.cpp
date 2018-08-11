#include <bits/stdc++.h>

using namespace std;

char decimal[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[101];
        
        scanf("%s", s);
        
        for(int i = 0; s[i]; i++) {
            printf("%d", decimal[s[i] - 'a']);
        }
        putchar('\n');
    }
    
	return 0;
}