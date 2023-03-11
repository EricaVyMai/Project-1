#include <stack>
#include <iostream>
using namespace std;
//like a queue, stacks are LIFO (last in first out)
int main(){
    stack<string> people;
    people.push("Grant");
    people.push("JFK");
    people.push("George");
    people.push("Isaac Newton");
    people.push("Martin Luther King Jr");
    //people = {"Martin Luther King Jr","Isaac Newton", "George", "JFK", ""Grant"}
    people.pop();
    //people = {"Isaac Newton", "George", "JFK", ""Grant"}
    //NOTE: have to use .top() to print out the first element
    while(!people.empty()){
        cout << people.top() << ", ";
        people.pop();
    }
    return 0;
}