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
using namespace std;


int main(){
    vector <int> sum;
    int temp = 0, max = 0;
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    for(int arr_i = 0;arr_i < 4;arr_i++){
       for(int arr_j = 0;arr_j < 4;arr_j++){
          for(int k =0; k < 3; k++) {
              temp += arr[arr_i][arr_j + k];              
              temp += arr[arr_i + 2][arr_j + k];
          }
           temp += arr[arr_i + 1][arr_j + 1];
           sum.push_back(temp);
           temp = 0;
       }
    }
    vector <int>::iterator it = sum.begin();
    max = *it;
    for(; it != sum.end(); it++) {
        if((*it >= 0) && (max >=0)) {
            if(*it > max)
            max = *it;
        }
        else if( (*it < 0) &&(max < 0)) {
            if(abs(*it) < abs(max)) 
                max = *it;            
        }
        else if(*it >= 0 && max < 0)
            max = *it;
        
    }
    
    cout << max;
    return 0;
}

