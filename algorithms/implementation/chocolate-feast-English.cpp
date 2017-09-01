#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int choco = 0,wrapper = 0,remaining=0,temp=0;
    vector <int> result;
    
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        choco = n/c;
        wrapper = choco;
        while((wrapper) >= m){
            temp = wrapper/m;
            choco += temp;
            remaining = wrapper %m;
            wrapper = remaining + temp;
        }
        
 
        result.push_back(choco);
    }
    
    for(vector<int>::iterator it = result.begin() ; it != result.end(); it++)
        cout << *it << endl;
    
    return 0;
}