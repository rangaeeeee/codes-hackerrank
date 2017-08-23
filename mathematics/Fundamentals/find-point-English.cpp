#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int px = 0, py = 0, qx = 0, qy = 0, rx = 0, ry = 0;
    
    cin >> n;
    
    // to find the mid point
    //(px + rx )/2 = qx
    // rx = 2*qx  - px
    for(int i = 0; i < n; i++){
        cin >> px >> py >> qx >> qy;
        rx = 2*qx - px;
        ry = 2*qy - py;
        cout << rx << " " << ry << endl;
    }
    return 0;
}
