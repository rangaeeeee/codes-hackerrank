#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    int t;
    cin >> t;
    int count = 0;
    vector <string> result;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        count = 0;
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
            if(a[a_i] <= 0 )
                count ++;
        }
        
        if(count >= k)
            result.push_back("NO");
        else
            result.push_back("YES");        
    }
    
    for(vector <string>::iterator str = result.begin();str != result.end();str++) {
        cout << *str << endl;
    }
    
    return 0;
}