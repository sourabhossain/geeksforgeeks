#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> q;
    string s;
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        cin >> s;
    
        for(int i = 0, c = 0; s[i]; i++) {
            if(s[i] == '(') {
                q.push(++c);
                printf("%d ", q.top());
            } else if(s[i] == ')') {
                printf("%d ", q.top());
                q.pop();
            }
        }
        putchar('\n');
    }

    return 0;
}
