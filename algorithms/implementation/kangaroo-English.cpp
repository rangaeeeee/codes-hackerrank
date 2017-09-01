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


#define debug 0

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    const unsigned long long max_size = std::numeric_limits<unsigned long long>::max();
    
    //assuming that it goes till dist1 or dist2 max
    unsigned long long x1, x2,v1,v2,dist1,dist2,kang1,kang2,temp;
    
    cin >> x1 >> v1 >> x2 >> v2;
    dist1 = max_size/v1;
    dist2 = max_size/v2;
    
    dist1 = std::max(dist1,dist2);

    
    //swap the start value since we need to lopp until small one kang is crossed the big kang value
    kang1 = x1;
    kang2 = x2;
    if(kang2 < kang1){
        kang1 = x2;
        kang2 = x1;
        temp = v2;
        v2 = v1;
        v1 = temp;
    }
    bool result = false;

#if debug     
    cout << "max_size : " << max_size << endl;
    cout << "max dist : " << dist1 << endl;
    cout << "i : 0"  <<" kang1 : "  << kang1 << " kang2 : " << kang2 << endl;
#endif  
      if((kang1 != kang2) && (v1 == v2)){
        cout << "NO" << endl;
        return 0;
    }
    if((kang1 < kang2) && (v1 < v2)){
        cout << "NO" << endl;
        return 0;
    }
    
    if((kang1 > kang2) && (v1 > v2)){
        cout << "NO" << endl;
        return 0;
    }
    
    for(int i = 1; i <= dist1; i++ ){
        if(kang1 > kang2){
           break; 
        }
        kang1 += v1;
        kang2 += v2;
#if debug 
      cout << "i : " << i <<" kang1 : "  << kang1 << " kang2 : " << kang2 << endl;
#endif        
        if(kang1 == kang2){
            result = true;
            break;
        }
    }
    
    if(result){
        cout << "YES" << endl;        
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}