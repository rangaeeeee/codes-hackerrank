#include <iostream>
#include <vector>

using namespace std;

// Add your code here

template <typename T>
void printArray(std::vector<T> myVector){
    for(typename std::vector<T>::iterator it = myVector.begin(); it != myVector.end(); it++)
     std::cout << *it << '\n';
}

int main() {
  
    vector<int> vInt{1, 2, 3};
    vector<string> vString{"Hello", "World"};
    
    printArray<int>(vInt);
    printArray<string>(vString);
    
    return 0;
}
