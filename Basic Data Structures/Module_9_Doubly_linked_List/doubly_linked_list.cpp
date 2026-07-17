#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward (Node *head) {
    Node *temp = head;
    
    while (temp != NULL)
    {
        /* code */
        cout << temp->val << ' ' ;
        temp = temp->next;
    }
    cout << endl;

    
}
int main()
{
    Node *head = new Node(20);
    Node *a = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev =head;

    a->next = tail;
    tail->prev = a;

    print_forward(head);
    return 0;
}