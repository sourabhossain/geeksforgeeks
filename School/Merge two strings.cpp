#include <stdio.h>
#include <string.h>

int main() 
{
	int testCase;
	
	scanf("%d ", &testCase);
	
	while(testCase--) {
	    char firstString[100001], secondString[100001];
	    
	    scanf("%s%s", firstString, secondString);
	    
	    int firstLength = strlen(firstString), secondLength = strlen(secondString), maxLength = firstLength > secondLength? firstLength:secondLength;
	    
	    for(int i = 0; i < maxLength; i++) {
	        if(i < firstLength && i < secondLength) {
	           printf("%c%c", firstString[i], secondString[i]);
	        }
	        else if(i < firstLength && i >= secondLength) {
	            putchar(firstString[i]);
	        }
	        else if(i < secondLength) {
	            putchar(secondString[i]);
	        }
	    }
	    putchar('\n');
	}
	
	return 0;
}