#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long int input = 0;
    unsigned long long testcase;
    unsigned long long threes = 0;
    unsigned long long fives = 0;
    unsigned long long threefives = 0;
    unsigned long long int sum = 0;
    cin >> testcase;
    
    for(unsigned long long i = 0; i < testcase; i++){
        cin >> input;
        
        sum = 0;
        threes = (input-1)/3;
        fives = (input-1)/5;
        threefives = (input-1)/15;
        
        if(input >= 15){
        sum = (threes*(threes+1)>>1) * 3;
        sum += (fives*(fives+1)>>1) * 5;
        sum -= (threefives*(threefives+1)>>1) * 15;
            cout << sum << endl;
        }
        else if((input < 15) &&(input > 5)){
           sum = (threes*(threes+1)>>1) * 3;
           sum += (fives*(fives+1)>>1) * 5;
            cout << sum << endl;
        }
        else if((input <=5 ) && ((input >= 1 ))){
           sum = (threes*(threes+1)>>1) * 3;
            cout << sum << endl;
        }
        
    }
    
    return 0;
}