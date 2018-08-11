#include <stdio.h>

int main() {
	//code
	int T;
	
	scanf("%d", &T);
	
	while(T--) {
	    int money, n;
	    
	    scanf("%d%d", &money, &n);
	    
	    if(money & 1) {
	        money++;
	    }
	    
	    printf("%d\n", n * (money / 2));
	}
	
	return 0;
}