#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
// Add your code here
    
    Difference(vector <int> elements) {
        this->elements = elements;
    }

    void computeDifference (void) {
        int min = 0, max = 0;
        vector <int>::iterator it = elements.begin();
        min = max = *it;
        for(; it != elements.end(); it++) {
    //        cout << *it << endl;
            if(*it > 0) {
            if(*it >= max)
                max = *it;
            
            if( min >= *it)
                min = *it;
            
                    }
        }
//        cout << "min : " << min << endl;
       // cout << "max : " << max << endl;
        maximumDifference =  abs(max)- abs(min);
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
