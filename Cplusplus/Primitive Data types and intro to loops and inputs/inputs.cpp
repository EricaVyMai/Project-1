#include <iostream>
using namespace std;
//with cin
int main(){
    string firstName, lastName;
    cout << "Enter your first and LastName" << endl;
    cout << ">>> ";
    cin >> firstName >> lastName;
    cout << "Hello " << firstName << " " << lastName << endl;
    return 0;
}