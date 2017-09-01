#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    long start, end;    
    int count = 0;
    vector <long> result;
    
    for(int i=0; i<t ; i++) {
        cin >> start >> end;  
        count = 0;      
     
        for(int j = 0;j*j <= end; j++ ) {
            if(j*j >= start)
            count++;
        }
            
        result.push_back(count);
    }
    
    for(vector <long>::iterator it = result.begin(); it != result.end(); it++)
        cout << *it << endl;
    
    return 0;
}