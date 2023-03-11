#include <iostream>
#include <string> //Need this for getline for conversions from string
using namespace std;
//using getline to get multiple inputs
//Note cin >> will only get 1 input
int main(){
    string str1;
    cout << "Enter a phrase: ";
    getline(cin, str1);
    cout << "You entered "  << str1 << endl;
    return 0;
}