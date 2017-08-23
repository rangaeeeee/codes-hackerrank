#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n,k=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {   k = i;
        for(int j =1;j<=n;j++){
            if((n-(k+j) > 0))
                cout << " ";
               else
               cout << "#";
          
        }          
        cout << endl;
    }
    
               return 0;
               }
