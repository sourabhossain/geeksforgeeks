#include <bits/stdc++.h>

int main() 
{
	int testCase;
	
	scanf("%d", &testCase);
	
	while(testCase--) {
	    int n, m, sum = 0;
	    
	    scanf("%d%d", &n, &m);
	    
	    for(int i = 0; i < n; i++) {
	        for(int j = 0, temp; j < m; j++) {
	            scanf("%d", &temp);
	            sum += temp;
	        }
	    }
	    printf("%d\n", sum);
	}
	
	return 0;
}