#include <bits/stdc++.h>

using namespace std;

void swap(char *a, char *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char a[20], b[20], temp;
        
        scanf("%s%s", a, b);
        
        int aLength = strlen(a), bLength = strlen(b);
        
        if(aLength == 1 && bLength == 1) {
            swap(&a[0], &b[0]);
        }
        else {
            swap(&a[0], &b[bLength - 1]);
            swap(&a[aLength - 1], &b[0]);
        }
        
        printf("%s %s\n", a, b);
        
    }
    
	return 0;
}