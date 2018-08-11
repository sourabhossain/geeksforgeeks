#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;

    scanf("%d", &testCase);

    while(testCase--) {
        char inputString[101];

        scanf("%s", inputString);

        int stringSize = strlen(inputString), countCharacter = 0;

        for(int i = 0; i < stringSize; i++) {
            if(inputString[i] >= 'A' && inputString[i] <= 'Z') {
                countCharacter++;
            }
        }
        printf("%d\n", countCharacter);
    }

    return 0;
}
