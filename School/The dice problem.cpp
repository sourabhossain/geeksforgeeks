#include <iostream>
using namespace std;

int arr[] = {0, 6, 5, 4, 3, 2, 1};

int main() {
	//code
	
	int T;
	cin >> T;
	
	while(T--) {
	    int n;
	    cin >> n;
	    cout << arr[n] << endl;
	}
	
	return 0;
}