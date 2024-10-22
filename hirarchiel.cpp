#include <iostream>
using namespace std;
class Person{
    char name[30];
    public:
    void read(){
        cout << "enter name: ";
        cin >> name;
    }
    void display(){
        cout << "Name: " << name << endl;
    }
    
};
class sport:public Person{
    int m = 50;
    public:
    void display(){
        cout << m;
        Person::display();
    }
};
class student:public Person{
    public:
    void display(){
        Person::display();
    }
};
int main(){
    sport sp;
    student st;
    sp.read();
    st.read();
    sp.display();
    st.display();
}