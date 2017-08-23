#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int n;    
    map <string,unsigned int> phonebook;
    string name;
    vector <string> search;
    unsigned int number, found = 0;
    
    cin >> n;
    
    for (int i =0;i<n;i++) {
        cin >> name >> number;
        phonebook.insert(pair<string,unsigned int>(name,number));
    }
  
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while(std::getline(std::cin, name)) {
       
       
        
     map<string,unsigned int>::iterator it = phonebook.begin();
    it = phonebook.find(name);
  if (it != phonebook.end())
      cout << it->first <<"=" << it->second << endl;
    else
        cout <<"Not found" << endl;
        
         
            
        }
    
     found = 0;
  
     return 0;
}
