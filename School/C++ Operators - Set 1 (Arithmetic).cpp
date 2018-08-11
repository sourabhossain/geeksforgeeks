#include <iostream>
using namespace std;

int sub(int a, int b) {
    if(a > b) {
        return a - b;
    }
    else {
        return b - a;
    }
}

int d(int a, int b) {
    if(a > b) {
        return (int)a / b;
    }
    else {
        return (int)b / a;
    }
}

int main() {
	//code
	int T;
	cin >> T;
	
	while(T--) {
	int a, b;
	cin >> a >> b;
	
	cout << a + b << endl;
	cout << sub(a, b) << endl;
	cout << d(a, b) << endl;
	cout << a * b << endl;
	}
	
	return 0;
}