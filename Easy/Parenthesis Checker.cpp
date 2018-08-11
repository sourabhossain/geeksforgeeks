#include <bits/stdc++.h>

using namespace std;

bool is_balanced(char s[]) {
    stack <char> c;

    for(int i = 0; s[i]; i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
           c.push(s[i]);
        }
        else if(s[i] == ')') {
            if(c.size() == 0) {
                return false;
            }
            else if(c.top() != '(') {
                return false;
            }

            c.pop();
        }
        else if(s[i] == '}') {
            if(c.size() == 0) {
                return false;
            }
            else if(c.top() != '{') {
                return false;
            }

            c.pop();
        }
        else if(s[i] == ']') {
            if(c.size() == 0) {
                return false;
            }
            else if(c.top() != '[') {
                return false;
            }

            c.pop();
        }
    }

    if(c.size() == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[101];

        scanf("%s", s);

        if(is_balanced(s)) {
            puts("balanced");
        }
        else {
            puts("not balanced");
        }
    }

    return 0;
}
