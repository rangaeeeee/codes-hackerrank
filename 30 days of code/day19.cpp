#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

//Write your code here

class Calculator : public AdvancedArithmetic {
    public :
    int divisorSum(int n){
        std::vector <int> myVector;
        
        for(int i = 2; i<=n; i++){
            if(0 == (n%i))
                myVector.push_back(i);
        }
        
         int sum = 1; //since the input always starts 1 or above
    // since we start the loop from 2 
    
    for(std::vector<int>::iterator it = myVector.begin(); it!= myVector.end(); it++)
        sum += *it;
    
    return sum;
    }
    
   
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}


