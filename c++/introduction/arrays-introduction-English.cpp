#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
       int n;
    cin >> n;
    vector <int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int half = n/2;
    int temp;

    for(int i = 0; i < half; i++) {
        // swap the element
        // iterate only half of array size since we are swapping
        temp       = arr[i];
        arr[i]     = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    for(int i = 0; i < n; i++)
    cout << arr[i] << " ";

    return 0;
}
