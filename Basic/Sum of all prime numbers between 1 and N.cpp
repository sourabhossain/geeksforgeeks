#include <bits/stdc++.h>
#define SIZE 1000002

char isPrime[SIZE];

void prime() {
	int i;
    
    for(i = 4; i < SIZE; i += 2) {
        isPrime[i] = 1;
    }
	
	int j, root = sqrt(SIZE);
	
	for(i = 3; i <= root; i += 2) {
        if(!isPrime[i]) {
            for(j = i * i; j < SIZE; j += i << 1) {
                isPrime[j] = 1;
            }
        }
	}
}

int main()
{
    prime();
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        long long sum = 0;
        
        for(int i = 2; i <= n; i++) {
            if(!isPrime[i]) {
                sum += i;
            }
        }
        
        printf("%lld\n", sum);
    }
    
    return 0;
}