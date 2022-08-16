#include <bits/stdc++.h>
using namespace std;

template <typename t>
class Node
{
public:
    t val;
    Node *prev;
    Node *next;

    Node(t val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

template <typename st>
class Stack
{
    Node<st> *head;
    Node<st> *top;
    int count = 0;
    
public:
    //PUSH
    void push(st val)
    {
        Node<st> *nw = new Node<st>(val);
        if(head == NULL)
        {
            head = top = nw;
            count++;
            return;
        }

        nw->prev = top;
        top->next = nw;
        top = nw;
        count++;
    }
    //SIZE
    int size()
    {
        return count;
    }
};

int main(void)
{
    Stack<int> s;
    s.push(10);
    s.push(20);

    cout << s.size() << endl; 
}