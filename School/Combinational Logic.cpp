#include <stdio.h>

int main() {
	int testCase;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
	    int a, b, c, d, e, f;
	    
	    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	   
	   if((!(a) * b) + (c * d) + (e * !(f)) > 0) {
	       puts("1");
	   }
	   else {
	       puts("0");
	   }
	}
	 
	return 0;
}