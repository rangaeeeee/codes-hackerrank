#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator {
    public :
    int a,b;
    
    int power(int a,int b) {
        int total = 1;
        try {
            if(a < 0 || b < 0)
              //  throw "p and n should be non-negative";
                throw std::logic_error("n and p should be non-negative");   // throws

            for(int i = 0; i < b; i++) {
                total = total * a;
            }
        }
        catch(const std::exception& e) {
            throw std::logic_error("n and p should be non-negative");   // throws
        }
        
        return total;
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}


