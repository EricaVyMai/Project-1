#include <set>
#include <vector>
#include <iostream>
using namespace std;
//Same as python sets
// set1 = {1,2,3} would be a python way
int main(){
    vector<int> nums1 = {1,2,3,4,4,4,4,5};
    //roster method for sets
    set<int> nums2 = {1,2,3,4,4,4,4,5};
    //NOTE: Sets are different from vectors
    //1) No Duplicate elements
    set<double> nums3;
    nums3.insert(1); //adding to the set {1}
    nums3.insert(2); // {1,2}
    nums3.insert(3.5); // {1,2,3.5}
    nums3.erase(1); //removing from the set. nums3 = {2, 3.5}
    cout << "This is the vector's size: " << nums1.size() << endl; //size 8
    cout << "This is the set's size of num2: "<< nums2.size() << endl; //size 5
    cout << "This is the set's size of num3: " << nums3.size() << endl; //size 2
    vector<int>::iterator itr1;
    set<int>::iterator itr2;
    for(itr1 = nums1.begin(); itr1 != nums1.end(); itr1++){
        cout << *itr1 << " "; //Output: 1 2 3 4 4 4 4 5
    }
    cout << endl;
    for(itr2=nums2.begin(); itr2!=nums2.end(); itr2++){ //looping through the set using iterators
        cout << *itr2 << " "; //Output 1 2 3 4 5
    }
    cout << endl;
    //you can also use auto keyword for sets
    for(auto x: nums3){
        cout << x << " ";
    }
    return 0;
}