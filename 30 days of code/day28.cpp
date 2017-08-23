#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define debug 0


int main(){
    int N;
    string gmail = "@gmail.";
    
    cin >> N;
    std::multimap<string,string> mymap;
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if(strstr(&emailID[0],&gmail[0])){
            mymap.insert(pair<string,string>(firstName,emailID));
        }
#if debug 
        if(strstr(&emailID[0],&gmail[0])){
            cout << firstName << " "<< emailID << endl;
        }
        
        
#endif        
    }
    for(map<string,string>::iterator it = mymap.begin(); it != mymap.end(); it++){
           // cout << "key : "<< it->first << " value : " << it->second << endl;
         cout << it->first << endl;
        }
    return 0;
}
