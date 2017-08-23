#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
        unsigned int start,end,i;

    cin >> start;
    cin >> end;

    for (i = start; i <= end; i++)
    {
    switch(i) {
        case 1 : 
            cout << "one" << endl;
            break;

        case 2 : 
            cout << "two" << endl;
            break;

        case 3 : 
            cout << "three" << endl;
            break;

        case 4 :
            cout << "four" << endl;
            break;

        case 5 :
            cout << "five" << endl;
            break;

        case 6 :
            cout << "six" << endl;
            break;
                                                                                                                                      case 7 :
            cout << "seven" << endl;
            break;

        case 8 :
            cout << "eight" << endl;
            break;

        case 9 :
            cout << "nine" << endl;
            break;

        default :
            if(i%2)
            {
                cout << "odd" << endl;
            }
            else
            {
                cout << "even" << endl;
            }

    }
    }


    return 0;
}
