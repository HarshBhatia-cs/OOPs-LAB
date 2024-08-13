#include <iostream>
using namespace std;
class Rectangle{
    private:
        int length,width;
    public:
        Rectangle(){
            length = 0;
            width = 0;
        }
        Rectangle(int l){
            length = l;
            width = 0;
        }
        Rectangle(int l, int w){
            length = l;
            width = w;
        }
    int getSqArea(){
        return length*length;
    }   
    int getRecArea(){
        return length * width;
    } 
   

};
int main(){
    Rectangle r1(0);
    Rectangle r2(5);
    Rectangle r3(10,7);
    cout << r1.getSqArea() << endl;
    cout << r2.getSqArea() << endl;
    cout << r2.getRecArea() << endl;
    cout << r3.getRecArea() << endl;
}