#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <map>
#include <set>
#include <list>
#include <ctime>
#include <deque>
#include <stack>
#include <string>
#include <bitset>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <cassert>

using namespace std;

int main (void) {
    int N;
    cin >> N;
    
    if(N%2)
        cout << "Weird" << endl;
    else {
        if(N >= 2 && N <= 5)
            cout << "Not Weird" << endl;
        else if (N >= 6 && N <= 20)
            cout << "Weird" << endl;
        else
            cout <<"Not Weird" << endl;            
    }
    
    return 0;
}
