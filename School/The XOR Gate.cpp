#include <stdio.h>

int main() {
    
	int T;
	
	scanf("%d", &T);
	
	while(T--) {
	    int n, temp, ans = 0;
	    
	    scanf("%d", &n);
	    
	    while(n--) {
	        scanf("%d", &temp);
	        ans ^= temp;
	    }
	    printf("%d\n", ans);
	}
	
	return 0;
}