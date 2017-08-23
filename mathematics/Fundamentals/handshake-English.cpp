#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

unsigned long long factorial(int n){
    
    if(n == 0)
        return 1;
    
    return (n*factorial(n-1));
}

int main(){
    int T;
    cin >> T;
    int numShake;
    unsigned long long num,dem;
    for(int a0 = 0; a0 < T; a0++){
        int N;
        cin >> N;
        
        //corner case
        if ((N == 0) ||(N == 1))
            cout << "0" << endl;
        
        if(N >= 2){
            //nCr = n!/((n - r)! * r!)
         
            numShake = (N*(N-1))/2;
            cout << numShake << endl;
        }
    }
    return 0;
}
