#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0,num = 0;
    cin >> n;
    vector <int> vec;
    for(int i = 0; i < n;i++){
        cin >> num;
        vec.push_back(num);        
    }
    sort(vec.begin(),vec.end());
    
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
        
    return 0;
}