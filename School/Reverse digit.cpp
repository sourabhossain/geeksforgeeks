#include <stdio.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	
	while(T--) {
	    int n;
	    scanf("%d", &n);
	    
	    int r = 0;
	    while(n) {
	        r *= 10;
	        r += (n % 10);
	        n /= 10;
	    }
	    printf("%d\n", r);
	}
	
	return 0;
}