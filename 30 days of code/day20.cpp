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

void bubbleSort(vector<int> &a){
    
    int numberOfSwaps = 0;
 //   cout << "size : " << a.size() << endl;

for (int i = 0; i < a.size(); i++) {
    
    
    for (int j = 0; j < a.size() - 1; j++) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }
    
    if (numberOfSwaps == 0) {
        break;
    }
}

    
   cout << "Array is sorted in " << numberOfSwaps <<" swaps." << endl;
cout << "First Element: " <<a.front() << endl;
cout << "Last Element: " << a.back() << endl;
    
   

}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    bubbleSort(a);
    

    
    return 0;
}
