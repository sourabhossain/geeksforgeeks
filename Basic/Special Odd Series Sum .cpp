#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	
	while(T--) {
	    int n;
	    cin >> n;
	    
	    long long total = 0;
	    
	    while(n) {
	        total += (n * n);
	        --n;
	    }
	    printf("%lld\n", total);
	}
	
	return 0;
}