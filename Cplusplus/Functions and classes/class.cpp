#include <iostream>
using namespace std;

class myClass{
public:
    string c; //attributes
    string y;
    myClass(string car, string year){ //constructor
        c = car;
        y = year;
    }
    void print(){ //method (function inside of a class)
        cout << "Model is " << c << ".\nYear is " << y << "." << endl;
    }
};
int main(){
    myClass a("Tesla", "2022");
    a.print();
    return 0;
}