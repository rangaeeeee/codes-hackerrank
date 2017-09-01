#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  unsigned long long prisonerStartID, numPrisoner, numSweet;
  int testcase;
  cin >> testcase;
  
  for(int i = 0; i < testcase; i++){
    cin >> numPrisoner >> numSweet >> prisonerStartID;
    
    if(numPrisoner < numSweet) {
      unsigned long long temp;
      temp = (  (numSweet) % numPrisoner) + (prisonerStartID - 1);
      temp = temp % numPrisoner;
      cout <<  (temp ? temp : numPrisoner)<< endl;
     
    }
    else{
      unsigned long long temp;
      temp = (prisonerStartID - 1 + numSweet) % numPrisoner;
      cout <<  (temp ? temp : numPrisoner)<< endl;
    }
    
  }
    return 0;
}