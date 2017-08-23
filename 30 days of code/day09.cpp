#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned int factorial(unsigned int i) {
    if(i  == 0)
        return 1;
    return (i*factorial(i - 1));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int i;
    cin >> i;
    
    cout << factorial(i) << endl;
    return 0;
}
