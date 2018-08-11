#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> pattern;
    
    for(int i = 1; i < 10000; i *= 2) {
        pattern.push_back(i);
    }
    
    int T, arraySize = pattern.size();
    
    scanf("%d", &T);
    
    while(T--) {
        int x, i;
        
        scanf("%d", &x);
        
        for(i = 0; i < arraySize; i++) {
            if(pattern[i] == x) {
                puts("True");
                break;
            }
        }
        
        if(i == arraySize) {
            puts("False");
        }
    }
    
    return 0;
}