#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;

    scanf("%d", &testCase);

    while(testCase--) {
        int arrayLength;
        char inputString[1001];

        scanf("%d ", &arrayLength);
        gets(inputString);
        
        int stringLength = strlen(inputString) - 1;
        int i = stringLength;
        
        while(i >= 0 && inputString[i] == ' ') {
            i--;
            stringLength--;
        }
    
        for(i = 0; i <= stringLength; i++) {
            if(inputString[i] == ' ') {
                inputString[i] = '_';
            }
            else if(inputString[i] >= 'A' && inputString[i] <= 'Z') {
                inputString[i] = inputString[i] + 32;
            }
        }

        puts(inputString);
    }

    return 0;
}

