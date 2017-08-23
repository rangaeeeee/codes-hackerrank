#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,positive=0,negative=0,zero=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i] > 0)
            positive++;
        else if(arr[arr_i] == 0)
            zero++;
        else
            negative++;
    }
    
    cout << (double)positive/n << endl << (double)negative/n << endl << (double)zero/n;
    return 0;
}
