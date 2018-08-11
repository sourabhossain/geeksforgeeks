#include <bits/stdc++.h>
#define SIZE 1001

using namespace std;

char isFibo[SIZE];

void fibo() {
    isFibo[0] = 1;
    isFibo[1] = 1;

    int a = 1, b = 1, temp;

    while(b < SIZE) {
        temp = a + b;
        isFibo[temp] = 1;
        a = b;
        b = temp;
    }
}

int main()
{
    fibo();
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n, temp;
        vector <int> v;
        
        scanf("%d", &n);
        
        while(n--) {
            scanf("%d", &temp);
            
            if(isFibo[temp]) {
                v.push_back(temp);
            }
        }
        
        temp = v.size();
        for(int i = 0; i < temp; i++) {
            printf("%d ", v[i]);
        }
        putchar('\n');
    }

    return 0;
}
