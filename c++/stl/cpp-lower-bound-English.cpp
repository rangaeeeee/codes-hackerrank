#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N = 0, num = 0;
    cin >> N;
    
    vector <int> vec;
    
    for(int i = 0; i < N; i++){
        cin >> num;
        vec.push_back(num);
    }
    
    int Q = 0, Y = 0;
    cin >> Q;
    
    vector <int>::iterator it;
    int test;
    
    for(int i = 0; i < Q; i++){
        cin >> Y;
    //it = find(vec.begin(),vec.end(),Y);
        it = lower_bound(vec.begin(),vec.end(),Y);
        test = it - vec.begin();
        if(vec.at(test) == Y){
           // cout << "Yes " << distance(vec.begin(),it)<<endl;
             cout << "Yes " << test + 1<<endl;
        }
        else{
            //test = distance(vec.begin(),it); 
            cout <<"No " << test + 1 << endl;
        }
        
    }
    
    return 0;
}