#include <stdio.h>

int main() 
{
    int testCase;
    
    scanf("%d", &testCase);
    
    while(testCase--) {
        int arrayLength;
        
        scanf("%d", &arrayLength);
        
        char ch, output[101];
        int i = 0;
        
        while(arrayLength--) {
            scanf(" %c", &ch);
            output[i++] = ch;
        }
        
        output[i] = '\0';
        puts(output);
        
    }
    
	return 0;
}