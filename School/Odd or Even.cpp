#include <stdio.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	
	while(T--) {
	    int n;
	    scanf("%d", &n);
	    
	    if(n & 1) {
	        puts("odd");
	    }
	    else {
	        puts("even");
	    }
	}
	
	return 0;
}