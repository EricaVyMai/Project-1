#include <iostream>
#include <algorithm> //for make_heap()
#include <vector>
using namespace std;
//Heaps
//Website explaining heaps
//https://www.geeksforgeeks.org/cpp-stl-heap/
//https://www.geeksforgeeks.org/heap-data-structure/
//https://www.geeksforgeeks.org/introduction-to-heap-data-structure-and-algorithm-tutorials/
int main(){
    vector<int> v1 = {1,2,3,4};
    //another way to get the max element using max heap
    make_heap(v1.begin(), v1.end());
    cout << v1.front() << endl; //4

    //getting smallest element using min heap
    make_heap(v1.begin(), v1.end(), greater());
    cout << v1.front() << endl; //1
    return 0;
}