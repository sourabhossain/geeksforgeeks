#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        int temp;
        vector <int> e, o;

        while(n--) {
            scanf("%d", &temp);

            if(temp & 1) {
                o.push_back(temp);
            }
            else {
                e.push_back(temp);
            }
        }

        vector <int>::iterator eit, oit;

        for(eit = e.begin(), oit = o.begin(); eit != e.end() && oit != o.end(); eit++, oit++) {
            cout << *eit << " " << *oit << " ";
        }

        if(oit != o.end()) {
            cout << *oit;
        }
        else if(eit != e.end()) {
            cout << *eit;
        }
        putchar('\n');
    }

    return 0;
}
