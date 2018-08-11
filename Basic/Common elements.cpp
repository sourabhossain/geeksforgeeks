#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n1, n2, n3;

        scanf("%d%d%d", &n1, &n2, &n3);

        vector <int> a(n1), b(n2), c(n3);

        for(int i = 0; i < n1; i++) {
            scanf("%d", &a[i]);
        }

        for(int i = 0; i < n2; i++) {
            scanf("%d", &b[i]);
        }

        for(int i = 0; i < n3; i++) {
            scanf("%d", &c[i]);
        }

        set <int> ans;

        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < n2; j++) {
                if(a[i] == b[j]) {
                    for(int k = 0; k < n3; k++) {
                        if(b[j] == c[k]) {
                            ans.insert(c[k]);
                        }
                    }
                }
            }
        }

        int arraySize = ans.size();

        if(arraySize) {
            for(set <int>::iterator it = ans.begin(); it != ans.end(); ) {
                cout << *it;

                if(++it != ans.end()) {
                    putchar(' ');
                }
            }
            putchar('\n');
        }
        else {
            puts("-1");
        }
    }

    return 0;
}
