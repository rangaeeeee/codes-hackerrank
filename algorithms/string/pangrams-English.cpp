#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
#define debug 0

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str1;    
    vector <bool> result (26);
    stringstream ss;
    string str2;
    
    
    getline(cin,str1);
#if debug   
    cout << "input string : "<<str1 << endl;
    cout << "input string length : " << str1.length() << endl;
#endif    
    for(int i = 0 ; i < str1.length(); i++) {
        ss << str1[i];
    }
    std::getline(ss,str2);
#if debug       
    cout << "string 2 : " << str2 << endl;
    cout << "string stream : " << ss.str() << endl;
    
    cout << "vector size     : " << result.size() << endl;
    cout << "vector capacity : " << result.capacity() << endl;
    cout << "vector max_size : " << result.max_size() << endl;
    result.reserve(100);    
    cout << "vector capacity : " << result.capacity() << endl;
    result.resize(28);
    cout << "vector capacity : " << result.capacity() << endl;
    cout << "vector size     : " << result.size() << endl;
    
    cout << "result[430]      : "  << result[430] << endl;
    
    cout << "vector capacity : " << result.capacity() << endl;
    cout << "vector size     : " << result.size() << endl;
    result.resize(26);
    for(vector<bool>::iterator it = result.begin(); it != result.end() ;it++ ){
        cout << " it : " <<*it << endl;
    }  
#endif    
    int index = 0;
    for(int i = 0; i < str2.length(); i++) {
        str2[i] = tolower(str2[i]);
        index = tolower(str2[i]) - (int)'a';
        if(index >=0 && index <= 26)            
        result[index] = true;
      //  cout << "char : " << str2[i] <<" integer : " << tolower(str2[i]) - (int)'a' << endl;
    } 
#if debug       
    int count = 0;
    for(vector<bool>::iterator it = result.begin(); it != result.end() ;it++,count++){
        cout << " count : " << count << " "<< *it << endl;
    }  
#endif
    bool pangram = true;
    
    for(vector<bool>::iterator it = result.begin(); it != result.end();it++){
        if(*it == false){
            pangram = false;
            break;
        }            
    }
    
    if(pangram)
        cout << "pangram" << endl;
    else
        cout << "not pangram" << endl;
        
    return 0;
}