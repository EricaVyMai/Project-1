#include <iostream>
#include <vector>
using namespace std;
//showing off negative indexing to pointers
void printNegIndexes(int*x, int size){
    //x -> 
    // 0  1  2  3  4  5  6  7
    //-7 -6 -5 -4 -3 -2 -1  0 INDEXES of the pointer
    for(int i = 0; i<size; i++){
        cout << x[i * -1] << " "; //i * -1 for neg indexing. 
        //OUTPUT: 7 6 5 4 3 2 1 0
    }
    cout << endl;
    cout << x[0] << endl; //7

}
int main(){
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7};
    printNegIndexes(&vec[7], vec.size()); //pointer will point to index 7. x[0] = 7
    return 0;
}