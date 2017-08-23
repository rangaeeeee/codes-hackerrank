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
    
    for(int i = 1 ; i <= 10 ; i++) {
        cout << N << " x " << i << " = " << (N*i) << endl;
    }
    return 0;
}
