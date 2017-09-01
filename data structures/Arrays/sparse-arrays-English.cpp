#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define DEBUG 0

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int numStr = 0, numQuery = 0;
  
  //get the number of string
  cin >> numStr;
  vector<string> vecStr,vecQuery;
  string str;
  
  //get the strings in vector
  for(int i = 0; i < numStr; i++){
    cin >> str;
    vecStr.push_back(str);
  }
  
  //get the number of queries
  cin >> numQuery;
  
  //get the queries in vector
  for(int i = 0; i < numQuery; i++){
    cin >> str;
    vecQuery.push_back(str);
  }
  
  int count = 0 ; // count the number of times each query occur in string vector
  for(vector<string>::iterator it = vecQuery.begin(); it != vecQuery.end(); it++){
    count = 0;
    count = std::count(vecStr.begin(),vecStr.end(),*it);
    cout << count << endl;
  }
#if DEBUG
  for(vector<string>::iterator it  = vecStr.begin(); it != vecStr.end(); it++){
    cout << *it << endl;
  }
#endif  
  
  return 0;
}