#include <iostream>
using namespace std;
//function ex of overloading
//using functions that are the same nam
string add(string str1, string str2){
    return str1 + " " + str2;
}
int add(int x, int y){
    return x+y;
}
int main(){
    cout << add("I like", "McDonalds") << endl; //C++ automatically knows which function of add I am calling
    cout << add(1,2) << endl;
    return 0;
}