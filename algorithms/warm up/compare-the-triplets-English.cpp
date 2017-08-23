#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[3],b[3];
    int aliceScore = 0,bobScore = 0;
    
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    
    for(int i = 0;i<3; i++) {
        if(a[i] > b[i]){
            aliceScore++;
        }
        else if(a[i] < b[i]){
            bobScore++;
        }
    }
    
    cout << aliceScore << " " << bobScore << endl;
    
    
    return 0;
}
