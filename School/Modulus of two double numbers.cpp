 #include <bits/stdc++.h>

using namespace std;

int main() 
{
    int testCase;
    
    scanf("%d", &testCase);
    
    while(testCase--) {
        double a, b;
        
        scanf("%lf%lf", &a, &b);
        int temp = a / b;
        
        if(temp == 0) {
           cout << a << endl;
        }
        else {
           cout << a - (temp * b) << endl;
        }
    }
    
	return 0;
}