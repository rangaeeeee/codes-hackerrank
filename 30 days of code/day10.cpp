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


int main(){
    int n,currCount = 0,prevCount = 0;
    cin >> n;
    
    while (n != 0) {    
        if((n & 0x1)) {
             currCount++;
        }           
        else {
            if(currCount >= prevCount)
            prevCount = currCount;
            currCount = 0;
        }
        n = n >> 1;
        
    }
    if(currCount >= prevCount)
        cout << currCount;
    else
        cout << prevCount;
    
    return 0;
}
