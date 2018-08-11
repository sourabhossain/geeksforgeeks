#include <bits/stdc++.h>
#define SIZE 100002

using namespace std;

char isPrime[SIZE];

void prime() {
    for(int i = 4; i < SIZE; i += 2) {
        isPrime[i] = 1;
    }
	
	int root = sqrt(SIZE);
	
	for(int i = 3; i <= root; i += 2) {
        if(!isPrime[i]) {
            for(int j = i * i; j < SIZE; j += i << 1) {
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
        
        for(int i = 2; i <= n; i++) {
            if(!isPrime[i]) {
                printf("%d ", i);
            }
        }
        putchar('\n');
    }
    
	return 0;
}