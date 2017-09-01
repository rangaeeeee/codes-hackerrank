#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
#include <stack>

using namespace std;

#define debug 0

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned int testcase;
    unsigned int operation;
    unsigned long long data;    
    std::vector<unsigned long long> mystack;
    unsigned long long maximum;
    
    cin >> testcase;
#if debug    
    unsigned long long input_size = 1000000000;
    maximum = std::numeric_limits<unsigned long long>::max();
    
    cout << "max long long : " << maximum << endl;
    cout << " size diff : " << maximum - input_size;
#endif       
    maximum = 0;
    
    for(unsigned int i = 0; i < testcase; i++){
        cin >> operation;
        
        switch(operation){
            case 1:
            cin >> data;
            mystack.push_back(data);   
            break;
            
            case 2:
            mystack.pop_back();
            break;
            
            case 3:
            
            cout << *std::max_element(mystack.begin(),mystack.end()) << endl;
            break;
        }
    }
     
    return 0;
}