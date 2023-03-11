#include <iostream>
using namespace std;
//LinkedList 
/*
Website for implementing Nodes
https://www.codesdope.com/blog/article/linked-list-traversal-using-loop-and-recursion-in-/ 
NOTE: multiple types of linked list
single, double, and circular
Website that explains the types of linkedList
https://www.programiz.com/dsa/linked-list-types
https://www.codesdope.com/blog/article/c-linked-lists-in-c-singly-linked-list/ 
https://www.geeksforgeeks.org/difference-between-singly-linked-list-and-doubly-linked-list/ 
*/
struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    void display()
    {
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
};

int main()
{
    linked_list a;
    a.add_node(10);
    a.add_node(100);
    a.add_node(-3);
    a.display();
    return 0;
}