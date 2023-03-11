#include <queue>
#include <iostream>
using namespace std;
//FIFO (First in first out)
int main(){
    queue<int> que1;
    que1.push(1); //adds element to the queue
    que1.push(10);
    que1.push(20);
    que1.push(30);
    que1.push(40);
    // //I CAN'T USE THIS WAY
    // for(int i=0; i<que1.size(); i++){
    //     cout << que1[i] << " ";
    // }
    
    que1.pop(); //que1 = {10, 20, 30, 40}
    cout << que1.back() << endl; //40
    while(!que1.empty()){ //while que1 isn't empty so {10, 20, 30, 40} -> {20,30,40} -> {30,40} -> {40} -> NULL STOP
        cout << que1.front() << " "; //10 20 30 40
        que1.pop(); //deletes first element
    }
    return 0;
}