#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

#define debug 0

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::stack<char> mystack;    
    int testcase;
    char symbol,testsymbol;
   
    cin >> testcase;
    cin.ignore();
    bool balanced = false;
    for(int i = 0; i < testcase; i++){
        string sym;
        getline(cin,sym);
        balanced = false;
        for(int j = 0; j < sym.length(); j++){
            
            if((sym[j] == '{') || (sym[j] == '[') || (sym[j] == '(')){
                mystack.push(sym[j]);   
            }           
            else if(!mystack.empty())
                {
                
                testsymbol = mystack.top();
                mystack.pop();
                if((sym[j] == '}' ) && (testsymbol == '{')){
                    balanced = true;
                }
                else if((sym[j] == ']' ) && (testsymbol == '[')){
                    balanced = true;
                }
                else if((sym[j] == ')' ) && (testsymbol == '(')){
                    balanced = true;
                }
                else
                {
                    balanced = false; 
                    
                    break;
                }
                        
            }
                
        }
        if((balanced == true) && (mystack.size() == 0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
        while(!mystack.empty()){
    //    cout << mystack.top() << " " << endl;
        mystack.pop();
    }
    }
    
#if debug 
    while(!mystack.empty()){
        cout << mystack.top() << " " << endl;
        mystack.pop();
    }
#endif
    return 0;
}