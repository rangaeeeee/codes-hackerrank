#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q = 0;
    set <int> st;
    
    cin >> Q;
    
    set<int>::iterator it;
    int x = 0, y = 0;
    for(int i = 0; i < Q; i++){
        cin >> y >> x;
        if(1 == y){
            st.insert(x);            
        }
        else if(2 == y){
            st.erase(x);
        }
        else if(3 == y){
            it = st.find(x);
            if(it == st.end()){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
        }
        
    }
    return 0;
}