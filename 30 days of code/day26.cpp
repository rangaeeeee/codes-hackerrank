#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define DAY_FINE 15
#define MONTH_FINE 500
#define YEAR_FINE 10000

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int dayActual = 0, monthActual = 0, yearActual = 0;
    int dayExpected = 0, monthExpected = 0, yearExpected = 0;
   // int month[12] = {30,28,31,30,31,30,31,31,30,31,30,31};
    
    int lateDays = 0;
    int fine = 0;       
    
    cin >> dayActual >> monthActual >> yearActual;
    cin >> dayExpected >> monthExpected >> yearExpected;
    
    if (yearActual < yearExpected){
         cout << 0 << endl;
        return 0;
    }
    
    if(yearActual > yearExpected) {
        cout << YEAR_FINE << endl;
        return 0;
    }
    if(yearActual == yearExpected) {
        if(monthActual < monthExpected){
            cout << 0 << endl;
            return 0;
        }
       if(monthActual == monthExpected){
        lateDays = dayActual - dayExpected;
        if(lateDays <= 0)
            cout << 0 << endl;
        else
            cout <<  DAY_FINE * lateDays << endl;
        }
        else if(monthActual > monthExpected){
            //lateDays = dayActual;            
            fine = (monthActual - monthExpected) * MONTH_FINE;            
           // fine += DAY_FINE * lateDays;
            cout << fine << endl;
            
        }
    }
    
    return 0;
}
