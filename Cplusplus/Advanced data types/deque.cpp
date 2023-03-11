#include <deque>
#include <iostream>
using namespace std;
//deque
int main(){
    deque<int> d1;

    d1.push_back(1); //d1 = {1} //inserts in the back
    d1.push_front(20); //d1 = {20, 1} Inserts at front
    d1.push_front(30); //d1 - {30,20,1}

    //NOTE: .front() and .back() still works for deque
    cout << d1.front() << endl; //30
    cout << d1.back() << endl; //1
    deque<int>::iterator itr;
    for(int i=0; i<d1.size(); i++){
        cout << d1[i] << " ";
    }
    cout << endl;
    //deleting elements
    d1.pop_back(); //deleted last element. d1 = {30,20}
    d1.pop_front(); //deletes first element. d1 = {20}
    for(itr = d1.begin(); itr != d1.end(); itr++){
        cout << *itr << endl;
    }
    return 0;
}