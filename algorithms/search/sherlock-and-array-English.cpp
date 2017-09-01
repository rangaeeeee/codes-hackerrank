#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,N, temp;
    
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        vector <int> vec;
        for(int j = 0; j < N; j++){
            cin >> temp;
            vec.push_back(temp);            
        }
        int left = 0, right = 0, total = 0;
        for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
            total += *it;
        }
        bool found = false;
        for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
            left += *it;
            right = total - left;
        //    cout << "it : " << *it <<" total : " << total << " left : " << left << " right : " << right << endl;
            if(right == (left - (*it))){
                cout << "YES" << endl;
                found = true;
            }               
        }
        if(found == false)
            cout << "NO" << endl;
        
    }
    return 0;
}