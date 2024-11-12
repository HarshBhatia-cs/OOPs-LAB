#include <iostream>
using namespace std;
template  <class T>
class Test{
    private:
    T ans;
    public:
    Test(T m):ans(m){
        cout << "inside constructor" << endl;
    }
    T getNumber(){
        return ans;
    }
};
int main(){
    Test < int > numInt(50);
    Test<double> numDouble(12.5);
    cout << "Integer number is: " << numInt.getNumber() << enndl;
    cout << "Double number is: " << numDouble.getNumber() << endl;
}