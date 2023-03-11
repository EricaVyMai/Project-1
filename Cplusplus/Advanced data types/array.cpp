#include <iostream>
using namespace std;
//arrays
int main(){
    int arr[5]; //arr of size 5
    for(int i=0; i<5; i++){
        arr[i] = i+1;
    }
    //arr =   {1, 2, 3, 4, 5}
    //indexes: 0  1  2  3  4
    //Can't use .size() on these, have to use this syntax to get the size
    cout << sizeof(arr)/sizeof(arr[0]) << endl; 
    for(int x: arr){
        cout << x << " "; //1 2 3 4 5
    }
    arr[3] = 100; //changes arr to arr= {1, 2, 3 , 100, 5}. You can do this at ANY index(in this case up to index 4)
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << endl;
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " "; // 1 2 3 100 5
    }
    return 0;
}