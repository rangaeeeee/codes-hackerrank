#include <string>

class Person {
    public :
    int age;
    string name;
    Person(){
        age = 0;        
    }
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor : public Person{
    public :
    int publication, cur_id;
     static int seq_id;
    void getdata();
    void putdata();
    Professor():Person(){
        publication = 0;
        cur_id = 0;
        
    }
};
int Professor::seq_id = 0;
class Student : public Person{
    public :
    int marks[6], cur_id, sum;
     static int seq_id;
    void getdata();
    void putdata();    
    Student():Person(){       
        cur_id = 0;
        sum = 0;
       
    }
};
int Student::seq_id = 0;
void Professor :: getdata(void){
   
   cin >> name >> publication >> cur_id;  
   
}

void Professor :: putdata(void){
     seq_id++;
    cout << name <<" "<< publication <<" "<< cur_id << " " << seq_id << endl;
}

void Student :: getdata(void){
    
   cin >> name;  
    cin >> cur_id;
    
    for(int i = 0; i < 6; i++){
        cin >> marks[i];
        sum += marks[i];
    }
    
    
} 

void Student :: putdata(void){
     seq_id++;
    cout << name << " " << cur_id << " " << sum << " " << seq_id << endl;    
}
