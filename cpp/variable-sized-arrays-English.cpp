#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  vector<vector<int>> array;
  vector<int> temp;

  int nNum,queryNum;

  cin >> nNum >> queryNum;
  int val,size,row,col;
  for (int i = 0; i < nNum; i++){
    temp.clear();
    cin >> size;
    for(int j = 0; j <size; j++){
      cin >> val;
      temp.push_back(val);
    }
    array.push_back(temp);    
  }
  for(int i = 0; i < queryNum;i++){
    cin >>row >> col;
    cout << array[row][col] << endl;
  }

  return 0;
}
