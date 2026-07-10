#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val )
{
    Node *newNode = new Node(val);
    if(head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val)
    {
       if(val == -1)
       {
        break;
       }
       insert_at_tail(head, tail, val);
    }

    if(head == NULL){
        return 0;
    }

    int mx = head->val;
    int mn = head->val;

    Node *temp = head;

    while (temp != NULL)
    {
        mx = max(mx, temp->val);
        mn = min(mn, temp->val);
        temp = temp->next;
    }
    cout << mx - mn << endl;
    
    
    return 0;
}