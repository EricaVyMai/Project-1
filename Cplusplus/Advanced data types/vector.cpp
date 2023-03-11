#include <vector>
#include <iostream>

using namespace std;
//vectors using both ways for a for loop
int main(){
    //roster method of initializing a vector
    vector<string> items  {"Pie", "Eggs", "Bacon", "Milk"};
    //initialize an empty vector
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.pop_back(); //Removes last element. nums = {1,2}
    nums.erase(nums.begin()); //Removes first element of nums. nums = {2}
    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << " "; //prints 2
    }
    cout << endl;
    for(string s : items){
        cout << s << " ";
    }
    return 0;
}