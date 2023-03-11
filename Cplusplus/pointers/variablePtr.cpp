#include <iostream>
using namespace std;

void print(char *p, int size){
    for(int i=0; i<size; i++){
        cout << p[i]; // like pie
    }
}
int main(){
    string str1 = "I like pie";
    string* ptr = &str1; //Declaration of a pointer
    cout << *ptr << endl; //I like pie
    print(&str1[1], str1.length()); 
    /*&str1[1] stores the address of 
    str1 at 1.
    aka the space between I and like
    */
    return 0;
}