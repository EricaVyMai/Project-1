#include <unordered_map>
#include <map>
#include <iostream>
using namespace std;
//These are like dictionaries in python
int main(){
    unordered_map<int, string> map1;
    //One way to add values to a map
    map1.insert(std::pair<int,string> {1, "Step 1: turn on the stove"});
    //another way to add values to an unordered_map
    map1[2] = "Step 2: pour water into the pan and put over the stove";

    for(auto x: map1){ //loop through a unordered_map 
    //NOTE: this doesn't have an order for the keys
        cout << "Key: " << x.first << "\nValue: " << x.second << endl;
    }
    map<int, string> map2;
    map2.insert(pair<int,string> {3, "Step 3: Hope the house doesn't catch on fire as you forget the stove is on"});
    map2[4] = "Pour pasta into the pan";
    
    //NOTE: maps have order
    for(auto i = map2.begin(); i != map2.end(); i++){ //Another way to loop throug a map
        cout << "Key: " << i -> first << "\nValue: " << i -> second << endl; //Need to use "->" for x.first and x.second for this method
    }
    return 0;
}