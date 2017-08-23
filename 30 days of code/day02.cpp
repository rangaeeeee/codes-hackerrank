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
#include <unordered_map>

using namespace std;

int main (void) {

    double mealCost = 0.0;
    int tipPercent  = 0;
    int taxPercent  = 0;
    int total       = 0;

    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    total = round(mealCost + (mealCost * tipPercent/100) + (mealCost *
    taxPercent/100));

    cout << "The total meal cost is " << total << " dollars.";

    return 0;
}
