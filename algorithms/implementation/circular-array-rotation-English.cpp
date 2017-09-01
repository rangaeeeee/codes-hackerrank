#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int n; // number of element in vector
    unsigned int k; // number of rotations
    unsigned int q; // number of queries
    unsigned int m; // position of each queries
    vector<unsigned int> result, queries;
    
    cin >> n >> k >> q;
    
    k %= n; // since n rotations produced the same array
    
    unsigned int input;
    
    // get the input list
    for(unsigned int i = 0; i < n; i++){
        cin >> input;
        result.push_back(input);        
    }
    
    // get the queries list
    for(unsigned int i =0; i < q; i++){
        cin >> input;
        queries.push_back(input);
    }
    
    //rotate the input list
    for(unsigned int i = 0; i < k; i++){
        input = result.back();
        result.pop_back();
        
        result.insert(result.begin(),input);
    }
    
    //print the input based on query position
    for(vector<unsigned int>::iterator it = queries.begin(); it != queries.end(); it++){
        cout << result[*it] << endl;
    }
    return 0;
}