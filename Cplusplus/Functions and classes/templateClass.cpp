#include <iostream>
using namespace std;

//website:
//https://www.geeksforgeeks.org/templates-cpp/
template<typename T> class MyClass{
public:
    T a;
    MyClass(T anything){
        a = anything;
    }
    void printTypeOf(){
        cout << typeid(a).name() << endl; //used to print variable types, similar to type(variableName) in python
    }
};
int main(){
    MyClass<int> a(12);
    MyClass<double> b(1.5);
    MyClass<char> c('a');

    a.printTypeOf(); //i (integer)
    b.printTypeOf(); //d (float)
    c.printTypeOf(); //c (char)
    return 0;
}