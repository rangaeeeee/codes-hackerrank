#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    int age,standard;
    char first_name[100],last_name[100];
    public :
    // set methods
    void set_age(int age);
    void set_standard(int standard);
    void set_first_name(string first_name);
    void set_last_name(string last_name);

    // get methods
    int get_age(void);
    string get_first_name(void);
    string get_last_name(void);
    int get_standard(void);
    string to_string(void);
};

    // set methods
    void Student::set_age(int age) {
        this->age = age;
    }
    void Student::set_standard(int standard){
        this->standard = standard;
    }
    void Student::set_first_name(string first_name){
        strcpy(this->first_name,first_name.data());
    }
    void Student::set_last_name(string last_name) {
        strcpy(this->last_name,last_name.data());
    }

    // get methods
    int Student::get_age(void){
        return age;
    }
    string Student::get_first_name(void){
        return first_name;
    }
    string Student::get_last_name(void){
        return last_name;
    }
    int Student::get_standard(void){
        return standard;
    }
string Student::to_string(void){
        stringstream ss;
    ss << age << "," << first_name << "," << last_name <<"," << standard;
        return ss.str();
    }



int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}