#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    int digit,temp,count=0;
    vector<int> result;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        temp = n;
        count = 0;
        digit = temp%10;
        //temp = temp/10; 
        while(temp != 0) {
            if(digit != 0) {
            if((n%digit) == 0)
                count++;
        }
       //     cout << "temp " << temp << endl;
        //    cout << "digit " << digit << endl;
                     
            temp = temp/10;
            digit = temp%10;   
        }
      //  cout << count << endl;
        result.push_back(count);        
    }
    
    for(vector<int>::iterator it = result.begin();it != result.end();it++)
        cout << *it << endl;
    return 0;
}