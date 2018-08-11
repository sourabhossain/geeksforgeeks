#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char inputString[101];
        
        scanf("%s", inputString);
        
        for(int i = strlen(inputString); i > 0; i--) {
            for(int j = 0; j < i; j++) {
                putchar(inputString[j]);
            }
            putchar('\n');
        }
    }
    
    return 0;
}