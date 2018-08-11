#include<iostream>
using namespace std;
int main()
{
    int T;
    
    scanf("%d", &T);
    
    while(T--) {
        int n;
        
        scanf("%d", &n);
        
        int temp, zero = 0, one = 0;
        
        while(n--) {
            scanf("%d", &temp);
            
            if(temp) {
                one++;
            }
            else {
                zero++;
            }
        }
        
        for(int i = 0; i < zero; i++) {
            putchar('0');
            
            if(i + 1 != zero) {
                putchar(' ');
            }
        }
        
        for(int i = 0; i < one; i++) {
            printf(" 1");
        }
        putchar('\n');
    }
    
	return 0;
}