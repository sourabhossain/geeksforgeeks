#include <bits/stdc++.h>

using namespace std;

bool palindrome(char string[], int size) {
	for(int i = 0; i < size; i++) {
		if(string[i] != string[--size]) {
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
        int i, n;
        char s[101];
        
        scanf("%d%s", &n, s);
        
        if(palindrome(s, n)) {
            puts("Yes");
        }
        else {
            puts("No");
        }
    }
    
	return 0;
}