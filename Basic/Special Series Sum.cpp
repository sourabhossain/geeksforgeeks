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
	        total += (n * (n + 1) / 2);
	        --n;
	    }
	    cout << total << endl;
	}
	return 0;
}