#include <bits/stdc++.h>
using namespace std;

int main() 
{	
	int T;
	cin >> T;
	
	while(T--) {
	    int n;
	    cin >> n;
	    
	    int t, MAX = 0;
	    
	    while(n--) {
	        cin >> t;
	        
	        if(MAX < t) {
	            MAX = t;
	        }
	    }
	    printf("%d\n", MAX);
	}
	
	return 0;
}