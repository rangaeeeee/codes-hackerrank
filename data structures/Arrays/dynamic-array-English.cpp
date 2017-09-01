#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define DEBUG 0

struct query{
  int type;
  unsigned long val1;
  unsigned long val2;
};

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int numSeq = 0; //number of sequence
  int numQuery = 0; //number of queries
  
  vector <query> vecQuery;
  
  query tempQuery;

  cin >> numSeq >> numQuery;
  vector<vector<unsigned long int> > vecAns(numSeq);
  unsigned long int lastAns = 0,seq = 0,index = 0;
  for(int i = 0; i < numQuery; i++){
    cin >> tempQuery.type >> tempQuery.val1 >> tempQuery.val2;
    vecQuery.push_back(tempQuery); 
    seq = (tempQuery.val1 ^ lastAns)%numSeq;

    if(tempQuery.type == 1){
        vecAns[seq].push_back(tempQuery.val2);
      }
      else{
       index = tempQuery.val2 % vecAns[seq].size();
       lastAns = vecAns[seq].at(index);
        cout << lastAns << endl;
      }
#if DEBUG 
    cout << "seq " << seq << " lastAns : " << lastAns << " "<< vecAns[seq].back() << " type " << tempQuery.type << " size " << vecAns[seq].size() <<endl;
#endif    
  } 
  
  return 0;
}