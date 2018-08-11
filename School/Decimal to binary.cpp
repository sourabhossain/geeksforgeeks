#include <stdio.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	
	while(T--) {
	    int n;
	    scanf("%d", &n);
	    char s[200];
	    int i;
	    
	    for(i = 0; n; i++) {
	        s[i] = (n & 1) + '0';
	        n >>= 1;
	    }
	    
	    while(i > 0) {
	        putchar(s[--i]);
	    }
	    putchar('\n');
	}
	
	return 0;
}