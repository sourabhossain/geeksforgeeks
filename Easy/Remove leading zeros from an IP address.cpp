#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    
    scanf("%d ", &T);
    
    while(T--) {
        char line[1000], c;
        int num; 
        vector<int> v;
    
        gets(line);
        stringstream ss( line );
        
        while( ss >> num ) {
            v.push_back( num );
            ss >> c;
        }
    
        num = v.size(); 
        for(int i = 0; i < num; i++) {
            printf("%d", v[i]);
            
            if(i + 1 != num) {
                putchar('.');
            }
        }
        putchar('\n');
    }

    return 0;
}
