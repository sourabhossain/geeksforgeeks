#include <stdio.h>

int main()
{
    int T;

    scanf("%d ", &T);

    while(T--) {
        char s[1001];

        gets(s);

        for(int i = 0; s[i]; i++) {
            if(s[i] != ' ') {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}
