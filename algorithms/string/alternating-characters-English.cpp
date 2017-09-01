#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

#define debug 0

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    int testcase;
    cin >> testcase;
    cin.ignore();
    vector<char> result;
    for(int i = 0; i < testcase; i++) {        
        getline(cin,input);    
#if debug 
        cout << "input string  : " << input << endl;
#endif 
        int deletion = 0;
        
        //since we access element index + 1 we need to reduce the loop size by 1
        int len = input.length() - 1;
        result.push_back(input[0]);
        for(int j = 0; j < len; j++){
            if(!strncmp(&input[j],&input[j+1],1)){
                deletion++;
            }
            else{
                result.push_back(input[j+1]);
            }
        }
        cout << deletion << endl;
#if debug 
        cout << "output string : ";
        for(vector<char>::iterator it = result.begin(); it != result.end(); it++){
            cout << *it;
        }            
        cout << endl;
#endif        
        result.clear();
        
    }
    

    
    return 0;
}