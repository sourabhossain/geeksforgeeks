#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int a, b;

        scanf("%d%d", &a, &b);

        set <int> aNod, bNod;
        int aRoot = sqrt(a), bRoot = sqrt(b);

        aNod.insert(1);
        aNod.insert(a);

        bNod.insert(1);
        bNod.insert(b);

        for(int i = 2; i <= aRoot; i++) {
            if(!(a % i)) {
                aNod.insert(i);
                aNod.insert(a / i);
            }
        }

        for(int i = 2; i <= bRoot; i++) {
            if(!(b % i)) {
                bNod.insert(i);
                bNod.insert(b / i);
            }
        }

        for(set <int>::iterator aIt = aNod.begin(); aIt != aNod.end(); aIt++) {
            bool ck = false;

            for(set <int>::iterator bIt = bNod.begin(); bIt != bNod.end(); bIt++) {
                if(a**bIt - b**aIt == 0) {
                    cout << *bIt << " " << *aIt << endl;
                    ck = true;
                    break;
                }
            }

            if(ck) {
                break;
            }
        }
    }

	return 0;
}
