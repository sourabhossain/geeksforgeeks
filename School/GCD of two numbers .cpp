#include <stdio.h>

int gcd(int a, int b) {
    int temp;
    
    while(b) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
	
	int T;
	
	scanf("%d", &T);
	
	while(T--) {
	    int a, b;
	    
	    scanf("%d%d", &a, &b);
	    printf("%d\n", gcd(a, b));
	}
	
	return 0;
}