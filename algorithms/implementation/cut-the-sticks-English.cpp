#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int count = 0,temp;
    vector<int> result;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    std::sort(arr.begin(),arr.end());
    
     for(int arr_i = 0;arr_i < n;arr_i++){
         count = 0;       
         temp = arr[arr_i];
         if(temp == 0)
             continue;
          for(int arr_j = 0;arr_j < n;arr_j++){              
              if(arr[arr_j] != 0) {                
              arr[arr_j] = arr[arr_j] - temp;
       
              count++;                  
              }
          }
         result.push_back(count);         
     }
    
    for(vector<int>::iterator it = result.begin(); it != result.end(); it++)
        cout << *it << endl;
    return 0;
}