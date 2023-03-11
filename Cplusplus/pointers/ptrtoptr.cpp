#include <iostream>
using namespace std;

int main(){
    int x = 10;
    
    cout << x << endl; //5
    int*ptr = &x;
    // *ptr -> the address of x in memory
    int**ptr1 = &ptr;
    //ptr1 -> ptr (ptr points to x)
    **ptr1 = 500; //changes the memory of ptr1 to 500, thus changes x to 500

    cout << x << endl; //500
    return 0;
}