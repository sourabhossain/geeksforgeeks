#include <stdio.h>

int main() {
	
	int T;
	
	scanf("%d", &T);
	
	while(T--) {
	    int n;
	    
	    scanf("%d", &n);
	    
	    for(int i = 1; i <= n; i++) {
	        for(int j = 0; j < i; j++) {
	            putchar('*');
	        }
	        
	        if(i < n) {
	            putchar(' ');
	        }
	    }
	    putchar('\n');
	}
	
	return 0;
}