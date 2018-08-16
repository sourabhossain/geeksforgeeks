#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);
        string ans = "";

        if(n <= 26) {
            ans += (n - 1 + 'A');
        } else {
            while(n) {
                ans += ((n - 1) % 26 + 'A');
                n = (n - 1) / 26;
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}
