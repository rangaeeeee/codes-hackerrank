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
  /* This creates a vector containing 10 vector<int>, each one of those with 5 elements:
std::vector<std::vector<int>> v(10, std::vector<int>(5));*/  
  
  
  
    cin >> testcase;
    cin.ignore();
  
  vector<vector<bool> > result;
  
    for(int i = 0; i < testcase; i++) {
      getline(cin,input);
      vector<bool> row(26);
      
      for(int j = 0; j < input.length(); j++) {
        row[(int)input[j] - (int)'a'] = true;
      }
      result.push_back(row);
      
#if debug 
      cout << "row size : " << row.size() << endl;
      cout << "result size : " << result.size() << endl;
      for(vector<bool>::iterator it = row.begin(); it != row.end(); it++)
        {
        cout << " " << *it;
      }
      cout << endl;
#endif 
      row.clear();
    }
  int gemCount = 0, stoneCount = 0;
  for(int i = 0; i < 26; i++){
    stoneCount = 0;
    for(int j = 0; j < testcase; j++){
      // access columnwise to get whether one letter is present in all stones
      if(result[j][i] == true){
        stoneCount++;
      }
    }
    if(stoneCount == result.size()){
      gemCount++;
    }
    
  }
  cout << gemCount << endl;
    return 0;
}