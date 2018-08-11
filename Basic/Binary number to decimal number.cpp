#include <bits/stdc++.h>

using namespace std;

int decimal_number(char binary[]) {
    int length = strlen(binary), base = 0;
    int decimal = 0;
    
	while(length) {
		decimal += (binary[--length] - '0') << base++;
	}

	return decimal;
}

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        char s[11];
        
        scanf("%s", s);
        printf("%d\n",  decimal_number(s));
    }
    
	return 0;
}