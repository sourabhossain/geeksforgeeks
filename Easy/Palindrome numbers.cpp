#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(char *str) {
	int arraySize = strlen(str);

	for(int i = 0; i < arraySize; i++) {
		if(str[i] != str[--arraySize]) {
			return false;
		}
	}

	return true;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        long long n;

        scanf("%lld", &n);

        char binary[101];
        int i;

		for(i = 0; n; i++) {
		    binary[i] = (n & 1) + '0';
		 	n >>= 1;
		}
		binary[i] = '\0';

		if(is_palindrome(binary)) {
            puts("1");
		}
		else {
            puts("0");
		}
    }

    return 0;
}
