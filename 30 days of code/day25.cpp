#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void isPrime(unsigned long long num){
    
    
    //cout << " num : " << num << endl;
    
    if(num == 1)
    {
        cout << "Not prime" << endl;
        return;
    }    
    
    else if((num == 2)|| (num == 3)){
        cout << "Prime" << endl;
        return;
    }
       
    else if(0 == (num %2)){
       cout << "Not prime" << endl;
        return; 
    }
    else{

    bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        
         if(prime)
        cout << "Prime" << endl;
    else
        cout << "Not prime" << endl;
    }
   
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T = 0;
    unsigned long long num = 0;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> num;
        isPrime(num);
    }
    return 0;
}
