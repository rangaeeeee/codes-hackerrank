#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    long result = 0,primary = 0, secondary = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
     for(int a_i = 0,a_j = n-1;a_i < n;a_i++,a_j--){
       
          primary += a[a_i][a_i];
           secondary += a[a_i][a_j];
       
    }
    result = abs(primary-secondary);
    
    cout << result;
    
    return 0;
}
