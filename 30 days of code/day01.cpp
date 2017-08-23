#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>

using namespace std;

int main (void) {

    int i    = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int ii;
    double dd;
    string ss;

    // reading the input
    cin >> ii;
    cin >> dd;

    //since we use getline after cin we need to flush the newline
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    getline(cin,ss);
        
    // printing the output
    cout << i + ii << endl;
    cout << std::fixed << std::setprecision(1) << d + dd << endl;
    cout << s + ss;

    return 0;
}
