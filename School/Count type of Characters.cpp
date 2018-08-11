#include <stdio.h>
#include <string.h>

int main()
{
	int testCase;

	scanf("%d ", &testCase);

	while(testCase--) {
	    char inputString[100001];

	    gets(inputString);

	    int lowerCase = 0, upperCase = 0, specialCase = 0, numericCase = 0;

	    for(int i = 0; inputString[i]; i++) {
	        if(inputString[i] >= 'a' && inputString[i] <= 'z') {
	            lowerCase++;
	        }
	        else if(inputString[i] >= 'A' && inputString[i] <= 'Z') {
	            upperCase++;
	        }
	        else if(inputString[i] >= '0' && inputString[i] <= '9') {
	            numericCase++;
	        }
	        else {
	            specialCase++;
	        }
	    }

	    printf("%d\n%d\n%d\n%d\n", upperCase, lowerCase, numericCase, specialCase);
	}

	return 0;
}
