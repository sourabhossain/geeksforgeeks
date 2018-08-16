#include <bits/stdc++.h>

using namespace std;

void nod_prime(int n) {
    map <int, int> count;
    
    while(!(n & 1)) {
        count[2]++;
        n >>= 1;
    }
    
    int root = sqrt(n);
    
    for(int i = 3; i <= root; i += 2) {
        while(!(n % i)) {
            count[i]++;
            n /= i;
        }
    }
    
    if(n > 2) {
        count[n]++;
    }
    
    for(map <int, int>::iterator it = count.begin(); it != count.end(); ) {
        printf("%d %d", it->first, it->second);
        
        if(++it != count.end()) {
            putchar(' ');
        }
    }
    putchar('\n');
}

int main()
{
    int T, n;
    
    scanf("%d", &T);
    
    while(T--) {
        scanf("%d", &n);
        nod_prime(n);
    }
    
	return 0;
}