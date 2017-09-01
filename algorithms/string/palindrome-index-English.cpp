#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define debug 0

bool palindrome(vector<char> &result){
 
  vector<char>::iterator forwd = result.begin();
  vector<char>::reverse_iterator revse = result.rbegin();
  bool palind = true;
  for(; forwd < result.end(); forwd++,revse++){
    if(*forwd != *revse){
      palind = false;
      break;
    }
  }
#if debug
  cout << "half_length : " << half_length << " mid : "<< mid << endl;
  cout << " palindrome return : " << palind << endl;
  for(int i = 0; i < result.size(); i++)
    cout << result[i] << " ";
    cout << endl;
#endif  
  return palind;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string input;
    int testcase;
  
  cin >> testcase;
  cin.ignore();
  vector<char> result;
  bool palind = false;
  
  for(int i = 0; i < testcase; i++){
    getline(cin,input);
    for(int j = 0; j < input.length(); j++){
      result.push_back(input[j]);      
    }
    int count = -1;
    vector <char> test;
    palind = palindrome(result);
    if(palind)
    {
       cout << "-1" << endl;
    }
    else{
      
    for(int j = 0; j < result.size(); j++){
      test = result;
      count = j;
      vector<char>::iterator it = test.begin();
      test.erase(it + j);
#if debug
      cout << "result size : " << result.size() << endl;
      cout << "test size : " << test.size() << endl;
#endif
      palind = palindrome(test);
      
      if(palind == true){
        break;
      }      
      
    }
    if((count == -1))
      cout << "-1" << endl;
    else
      cout << count << endl;
    }
    result.clear();
    test.clear();
  }
    return 0;
}