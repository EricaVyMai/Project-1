#include <iostream>
using namespace std;
// C++ Program to demonstrate
// Use of template
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
//another alternative to overloading
//Code stolen from: 
//https://www.geeksforgeeks.org/templates-cpp/
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
    /* (x>y) ? x : y equivalent to
        if(x>y){
            return x;
        }
        else{
            return y;
        }
    */
}
 
int main()
{
    // Call myMax for int
    cout << myMax<int>(7, 3) << endl;
    // call myMax for double
    cout << myMax<double>(3.0, 7.0) << endl;
    // call myMax for char
    cout << myMax<char>('g', 'e') << endl;
 
    return 0;
}