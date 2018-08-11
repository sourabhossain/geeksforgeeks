#include <stdio.h>
#include <string.h>

int main() 
{
	int T;
	scanf("%d", &T);
	char s[101];
	
	while(T--) {
	    scanf("%s", s);
	    
	    int i = strlen(s) - 1;
	    while(i >= 0) {
	        putchar(s[i--]);
	    }
	    putchar('\n');
	}
	return 0;
}