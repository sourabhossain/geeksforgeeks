#include <stdio.h>

int main() {
	int testCase;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
	    int firstNumber, secondNumber;
	    
	    scanf("%d%d", &firstNumber, &secondNumber);
	    printf("%d\n", (firstNumber + secondNumber) % 12);
	}
	
	return 0;
}