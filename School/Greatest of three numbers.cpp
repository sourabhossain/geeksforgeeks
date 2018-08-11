#include <stdio.h>

int maximum(int a, int b) {
    return (a > b)? a:b;
} 

int main() {
	//code
	int T;
	scanf("%d", &T);
	
	while(T--) {
	   int a, b, c;
	 
	   scanf("%d%d%d", &a, &b, &c);
	   printf("%d\n", maximum(a, maximum(b, c)));
	}
	
	return 0;
}