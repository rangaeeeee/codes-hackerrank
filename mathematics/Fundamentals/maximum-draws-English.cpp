#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int testcase;
    unsigned int pairs = 0;
    
    cin >> testcase;
    
    for(unsigned int i = 0; i < testcase; i++){
        cin >> pairs;       
        
        //since each pair has two colour so the total number will have half one colour and other half another colour
        cout << pairs + 1 << endl;
    }
    return 0;
}
