#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N = 0,num = 0;
    cin >> N;
    vector <int> vec;
    
    for(int i = 0; i < N; i++){
        cin >> num;
        vec.push_back(num);
    }
    
    int x,a,b;
    cin >> x >> a >> b;
    
    vec.erase(vec.begin() + (x - 1));
    vec.erase(vec.begin()+(a-1),vec.begin()+(b-1));
    
    cout << vec.size() << endl;
    
    for( auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    return 0;
}