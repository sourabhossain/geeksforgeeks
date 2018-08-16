#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    int T;
    string s;
    
    scanf("%d ", &T);
    
    while(T--) {
        cin >> s;
        
        for(int i = 0, length = s.size(); i < length; i++) {
            if(isVowel(s[i])) {
                while(i < length && !isVowel(s[length - 1])) {
                    length--;
                }
                
                swap(s[i], s[--length]);
            } else if(isVowel(s[length - 1])) {
                while(i + 1 < length && !isVowel(s[i + 1])) {
                    i++;
                }
                
                swap(s[++i], s[--length]);
            }
        }
        
        printf("%s\n", s.c_str());
    }
    
	return 0;
}