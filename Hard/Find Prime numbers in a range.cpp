#include <stdio.h>
#include <math.h>
#define SIZE 100002

char data[SIZE];

void prime() {
    data[1] = 1;
    for(int i = 4; i < SIZE; i += 2) {
        data[i] = 1;
    }
    
    int root = sqrt(SIZE);
    for(int i = 3; i <= root; i += 2) {
        if(!data[i]) {
            for(int j = i * i; j < SIZE; j += i << 1) {
                data[j] = 1;
            }
        }
    }
}

int main() {
	//code
	prime();
	int T;
	scanf("%d", &T);
	
	while(T--) {
	   int a, b;
	   scanf("%d%d", &a, &b);
	   
	   int c = 0;
	   for(int i = a; i <= b; i++) {
	       if(!data[i]) {
	           printf("%d ", i);
	       }
	   }
	   putchar('\n');
	}
	
	return 0;
}