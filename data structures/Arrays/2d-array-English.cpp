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
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int sum =0, largest = 0,all=0,flag =0;


    for(int arr_i = 0;arr_i < 4;arr_i++){
       for(int arr_j = 0;arr_j < 4;arr_j++){
           sum = 0;
          sum += (arr[arr_i][arr_j]);
          sum += (arr[arr_i][arr_j + 1]);
          sum += (arr[arr_i][arr_j + 2]);
          sum += (arr[arr_i + 1][arr_j + 1]);
          sum += (arr[arr_i + 2][arr_j + 0]);
          sum += (arr[arr_i + 2][arr_j + 1]);
          sum += (arr[arr_i + 2][arr_j + 2]);

           if (flag == 0){
               largest = sum;
               flag = 1;
           }
           
         if((sum >= 0) && (largest >= 0))
          {
              //negative number 
             if(largest < sum)
                  largest = sum;

          }
          else if ((sum < 0) && (largest >= 0))
          {   
            

          }
           else if ((sum >= 0) && (largest < 0))
          {   
            largest = sum;

          }
           else if ((sum < 0) && (largest < 0))
          {   
                   if(abs(sum) < abs(largest))
                       largest = sum;

          }

           


       }        
        
    }

    cout << (largest);

    return 0;
}