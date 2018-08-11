#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        vector <int> arr(n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int i;
        bool ck = false;

        if(arr[0] == 1) {
            putchar('0');
            ck = true;
        }
        else if(arr[0] > 1) {
            printf("0-%d", arr[0] - 1);
            ck = true;
        }

        for(i = 1; i < n; i++) {
            if(arr[i] - arr[i - 1] == 2) {
                if(ck) {
                    putchar(',');
                }

                printf("%d", arr[i] - 1);
                ck = true;
            }
            else if(arr[i] - arr[i - 1] > 2) {
                if(ck) {
                   putchar(',');
                }

                printf("%d-%d", arr[i - 1] + 1, arr[i] - 1);
                ck = true;
            }
        }

        if(arr[i - 1] == 98) {
            printf(",99");
        }
        else if(arr[i - 1] < 98) {
            printf(",%d-99", arr[i - 1] + 1);
        }
        putchar('\n');
    }

	return 0;
}
