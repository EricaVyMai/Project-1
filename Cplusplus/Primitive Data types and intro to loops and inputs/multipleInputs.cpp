#include <iostream>
#include <vector>
using namespace std;
//another way no getline()
int main(){
    string str1;
    vector<string> names;
    do{
        cout << "Enter END to stop the program, otherwise enter in names" << endl;
        cin >> str1;
        if(str1 == "END"){
            break;
        }
        names.push_back(str1);
    } while(str1 != "END");

    cout << "\tlooping using indexes" << endl;
    //NOTE: once i == names.size(), the loop stops
    /*
    Python equivalent of for i in range(len(names)):
         print(names[i])
    */
    for(int i = 0; i<names.size(); i++){
    cout << names[i] << " ";
    }
    cout << endl << "\tlooping using the elements way of a for loop" << endl;
    for(string name : names){
        cout << name << " ";
    } 
    return 0;
}