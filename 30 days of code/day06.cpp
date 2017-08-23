#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0,j=0;
    vector <string> str;
    string temp;
    cin >> n;
    for (int i =0;i<n;i++) {
        cin >> temp ;
        str.push_back(temp);
    }
    
    for(int i =0;i< str.size();i++){
        for(j=0;str[i][j] != '\0';j++) {
         if(!(j%2)) //odd 
         {
             cout << str[i][j];
         }
        
        }
        cout << " " ;
        for(j=0;str[i][j] != '\0';j++) {
         if((j%2)) //even 
         {
             cout << str[i][j];
         }
        
        }
        cout << endl;
    }
     
    return 0;
}
