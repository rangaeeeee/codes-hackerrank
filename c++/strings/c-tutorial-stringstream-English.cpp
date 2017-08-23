#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

#define debug 0

vector<int> parseInts(string str) {
   // Complete this function
    stringstream ss;
    vector <int> result;
    ss << str;
#if debug     
    cout << "string : " << str << endl;
    
    cout << endl;
#endif        
    
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ','){
            cout << endl;            
        }
        else {
            cout << str[i];
        }
        
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}