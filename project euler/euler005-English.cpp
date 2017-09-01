#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define debug 0
bool isPrime(int num){
    if(num == 2)
        return true;
    
    bool prime = true;
    int squareRoot = 0;
    squareRoot = sqrt(num);
    
    for(int i = 2; i <= squareRoot; i++){
        if((num % i) == 0){
            prime = false;
            break;
        }
    }
    
    return prime;
}

void erase(std::vector<int>& myNumbers_in, int number_in)
{
    std::vector<int>::iterator iter = myNumbers_in.begin();
    while (iter != myNumbers_in.end())
    {
        if (*iter == number_in)
        {
            iter = myNumbers_in.erase(iter);
        }
        else
        {
           ++iter;
        }
    }

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int testcase;
    int number;
    vector <int> primeFactor;
    vector <int> input;
    cin >> testcase;
    
    for(int i = 0; i < testcase; i++){
        cin >> number;
        int leastProduct = 1;
        for(int j = 1; j <= number;j++){
            if(isPrime(j)){
                primeFactor.push_back(j);
            }
            //build the input vector for factorization with prime factor
            input.push_back(j);
        }
#if debug       
   //     cout << "number : " << number << endl;
        cout << "input vector : ";
        for(vector<int>::iterator i = input.begin(); i != input.end(); i++){
            cout << *i << " ";
        }
        cout << endl;
        cout << "prime factors : ";
        for(vector<int>::iterator i = primeFactor.begin(); i != primeFactor.end(); i++){
            cout << *i << " ";
        }
        cout << endl;
#endif         
        while(input.size() != 0){
           
    
           
                
             
             
                    erase(input,1);
#if debug             
             
                cout << "after input vector : ";
        for(vector<int>::iterator i = input.begin(); i != input.end(); i++){
            cout << *i << " ";
        }
        cout << endl;                  
                    
            
      
   //     cout << "number : " << number << endl;
        cout << "input vector : ";
        for(vector<int>::iterator i = input.begin(); i != input.end(); i++){
            cout << *i << " ";
        }
        cout << endl;
        cout << "prime factors : ";
        for(vector<int>::iterator i = primeFactor.begin(); i != primeFactor.end(); i++){
            cout << *i << " ";
        }
        cout << endl;
#endif            
            for(vector<int>::iterator it = primeFactor.begin(); it != primeFactor.end(); it++){
                //remove all 1 after factorization
            
                bool noFactor = true;
                int val,num,fact;
                
                fact = (*it);
                for(int j = 0; j < input.size(); j++){
                    //if number is divisble then divide the number
                    num = input[j];
                     
                    
                    if(num % fact == 0){
                        
                      //  cout << "num : " << num << " fact : " << fact << endl;
                        val = num/fact;
                        input[j] = val;
                        
                        noFactor = false;
                      
                    }
                }
                
                if(!noFactor){
                    leastProduct = leastProduct * fact;
                }
                
                
            }
            
     
             
           
        }

        cout << leastProduct << endl;
        input.clear();
        primeFactor.clear();
    }

    return 0;
}