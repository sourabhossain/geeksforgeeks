#include <stdio.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	
	while(T--) {
	    int n;
	    scanf("%d", &n);
	    
	    int t = n / 2;
	    for(int i = 1; i <= t; i++) {
	        if(n % i == 0) {
	            printf("%d ", i);
	        }
	    }
	    printf("%d\n", n);
	}
	
	return 0;
}