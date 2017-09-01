#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    vector <int> result;
    int height = 0;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        height = 1;
        for(int i=1;i <= n;i++) {
            if(i & 0x1) {
              height += height; 
               
            }
            else {
                height++;
                 
            }
          //  cout << "height :" << height << endl;
          //  cout << "n :" << n << endl;
            
        }        
        result.push_back(height);
    }
    
    for(vector<int>::iterator it = result.begin(); it != result.end(); it++)
        cout << *it << endl;
    
    return 0;
}