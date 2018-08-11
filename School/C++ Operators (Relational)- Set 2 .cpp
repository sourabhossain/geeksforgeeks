#include <iostream>

using namespace std;

int main() 
{
	int T;
	cin >> T;
	
	while(T--) {
    	int a, b;
    	cin >> a >> b;
    	
    	if(a < b) {
    	    cout << a << " is less than " << b << endl;
    	}
    	else if (a == b) {
    	    cout << a << " is equals to " << b << endl;
    	}
    	else {
    	    cout << a << " is greater than " << b << endl;
    	}
	}	
	return 0;
}