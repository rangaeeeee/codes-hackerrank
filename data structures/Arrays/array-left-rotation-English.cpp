#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int size = 0; // total number of elements
    unsigned int rotation = 0; // number of times to rotate
    vector <unsigned int > result;
    
    cin >> size >> rotation;
    
    unsigned int temp; 
    
    for(unsigned int i = 0; i < size; i++){
        cin >> temp;
        result.push_back(temp);       
    }
    
    for(unsigned int i = 0; i < rotation; i++){
        temp = result.front();
        result.erase(result.begin());
        result.push_back(temp);
    }
    
    for(vector<unsigned int>::iterator it = result.begin(); it != result.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}