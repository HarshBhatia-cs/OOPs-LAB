// C++ programtoimplement multiple inheritance.
#include <iostream>
using namespace std;
class Person{
    char name[30];
    public:
    void read(){
        cout<< "Enter name" << endl;
        cin >> name;
    }
    void display(){
        cout << "name:"<< name << endl;
    }
};
class sport{
    int m = 50;
    public:
    void display(){
        cout << m;
    }
};

class Student:public Person,public sport{
    public:
    void display(){
        Person::display();
        sport::display();
    }
};
int main(){
    Student st;
    st.read();
    st.display();
}