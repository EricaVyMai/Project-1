#include <iostream>
using namespace std;
int add(int x, int y){
    return  x +  y;
}
int main(){
    int x = 20;
    int y = 2;
    //intializing it to point to a function
    int (*ptr)(int,int);
    ptr = add; //point to function
    cout << (*ptr)(x, y); //22
    return 0;
}