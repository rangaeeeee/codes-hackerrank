#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int testcase;
    
    cin >> testcase;
    cin.ignore();
    
    int N, K;
    
    for(int i = 0; i < testcase; i++){
        cin >> N;
        cin >> K;
        int maximum = 0, result = 0;
        for(int j = 1; j < N; j++){
            for(int kk = j+1; kk <= N; kk++){
                maximum = j & kk;
                if((maximum < K) && (maximum > result))
                    result = maximum;
            }
        }
        cout << result << endl;
    }
    return 0;
}
