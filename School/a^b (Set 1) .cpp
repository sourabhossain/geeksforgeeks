#include <stdio.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	
	while(T--) {
	    int a, b;
	    scanf("%d%d", &a, &b);
	    
	    long long total = 1;
	    while(b--) {
	        total *= a; 
	    }
	    printf("%lld\n", total);
	}
	
	return 0;
}