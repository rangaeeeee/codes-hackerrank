#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


#define debug 0

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    int testcase;
    vector <char> result;
    
    cin >> testcase;
    cin.ignore();
    
    for(int i = 0; i < testcase; i++){
        getline(cin,input);
        for(int i = 0;i<input.length();i++)
            result.push_back(tolower(input[i]));
#if debug
      cout << "input string : "  << input << endl;
        if((input.length() <= 3 ) || (input.length() & 0x1))
         {
         cout <<  "Not Funny" << endl;
     }
     else 
#endif         
     //if((input.length() > 3)) {
        bool funny = true;
     
     vector<char>::iterator its = result.begin();
         vector<char>::iterator its1 = result.begin() + 1;
     vector<char>::reverse_iterator itr = result.rbegin();
         vector<char>::reverse_iterator itr1 = result.rbegin() + 1;

         int left = 0;
         int right = 0;
         for(;its1 < result.end() - 1;its++,its1++,itr++,itr1++){
             
             left = abs((int)(*its1) - (int)(*its));
             right = abs((int)(*itr1) - (int)(*itr));
          //   cout << "left : " << left << " right : " << right << " *its1 : " << *its1 << " *its : " << *its << endl;
             
             if(left != right){
                 funny = false;
                 break;
             }
         }
         
#if 0         
     for(int j = 0,k = input.length() - 1; j < half_length; j++,k--){
         if(!(abs((int)(input[j+1] - (int)input[j])) == abs((int)(input[k] - (int)input[k-1])))){
             funny = false;
             break;
         }
     }
#endif   
         if(funny)
         cout << "Funny" << endl;
         else
         cout <<  "Not Funny" << endl;
   //  }
   result.clear();
    }
    return 0;
}