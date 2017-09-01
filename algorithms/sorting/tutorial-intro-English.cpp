#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,val,search;
    cin >> search;
    cin >> n;
    
    vector <int> vec;
    for(int i = 0; i < n; i++)
        {
        cin >> val;
        vec.push_back(val);
    }
    int index = 0;
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++, index++)
        {
      //  cout << *it << " " << search << endl;
        if(*it == search)
            cout << index;
    }
    return 0;
}