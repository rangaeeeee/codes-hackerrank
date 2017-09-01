#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int chapter = 0, problem_page = 0,startPage = 0, endPage = 0;
    int startProblem = 0, endProblem = 0;
    int problem = 0, special = 0, page = 0;    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> chapter >> problem_page;
    vector < vector <int> > pageNo (2);
    for(int i = 0; i < chapter; i++){
        cin >> problem;
        startPage = page+1;
        startProblem = 1;
        endProblem = problem;
        page += problem/problem_page;
        if(problem%problem_page > 0) {
            page++;            
        }    
        endPage = page;        
        
     //   cout << "start page : " << startPage << endl;
    //    cout << "end page   : " << endPage << endl;
        
        for(int j = startPage; j <= endPage; j++) {
            if (problem > 0) {
                pageNo[0].push_back(startProblem);
                problem -= problem_page;
                startProblem += problem_page;  
                if (problem > 0)
                pageNo[1].push_back(startProblem-1);
                else
                pageNo[1].push_back(endProblem);    
            }
        }       
    }
    
    vector<int>::iterator it = pageNo[0].begin();
    vector<int>::iterator it1 = pageNo[1].begin();
    page = 1;
    for(; it != pageNo[0].end(); it++,it1++) {
        if(page >= *it && page <= *it1) {
            special++;            
        }
        page++;
      //      cout << "problem start : " <<  *it << endl;
      //      cout << "problem end   : " <<  *it1 << endl;
    }
    cout << special;
    return 0;
}