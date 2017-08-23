// Write your Student class here
class Student {
    vector <int> score;
    int total;
    public :
    void input(void);
    int calculateTotalScore(void);
    Student() { total =0;}

};

void Student::input(void) {
    int temp;
    for (int i =0;i<5;i++) {
        cin >>temp;
        score.push_back(temp);
    }
}

int Student::calculateTotalScore(void) {
    vector <int>::iterator v ;

    for(v = score.begin(); v!= score.end(); v++)
    {
       total += *v;
    }

    return total;

}