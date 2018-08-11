#include <iostream>
using namespace std;

int main() 
{

	int T;
	cin >> T;
	
	while(T--) {
	    int n;
	    cin >> n;
	    
	    string s, MAX;
	    int t = 0, a;
	    
	    while(n--) {
	        cin >> s;
	        
	        a = s.size();
	        if(t < a) {
	            MAX = s;
	            t = a;
	        }
	    }
	    cout << MAX << endl;
	}
	
	return 0;
}