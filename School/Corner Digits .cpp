#include <stdio.h>
#include <string.h>

int main() 
{
    int testCase;
    
    scanf("%d", &testCase);
    
    while(testCase--) {
        char number[11];
        
        scanf("%s", number);
        printf("%c %c\n", number[0], number[strlen(number) - 1]);
    }
    
	return 0;
}