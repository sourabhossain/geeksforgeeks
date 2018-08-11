#include <stdio.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	
	while(T--) {
	    int n;
	    scanf("%d", &n);
	    
	    int i = 1, sum = 0;
	    
	    while(n--) {
	        sum += i;
	        i++; 
	    }
	    printf("%d\n", sum);
	}
	
	return 0;
}