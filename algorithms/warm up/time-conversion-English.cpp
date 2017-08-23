#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){
    string time;
    char c;
    int result = -1;
    cin >> time;
    //int i_auto = std::stoi (time,nullptr,0);
    std::string::size_type sz;
    int hour = std::stoi (time,nullptr,0);
    

    if(strncmp(&time[8],"P",1)) {
        if(hour == 12)
            hour = 0;
        
        cout << std::setfill('0') << std::setw(2) << hour << time[2] << time[3] << time[4] << time[5] << time[6] << time[7];
    }
    else {
        if(hour == 12)
            hour = 0;
        cout <<  std::setfill('0') << std::setw(2) << hour + 12 << time[2] << time[3] << time[4] << time[5] << time[6] << time[7];
    }
    
    return 0;
}
