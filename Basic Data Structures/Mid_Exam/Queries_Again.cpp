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

int size(Node *head)
{
    int cnt = 0;
    Node *temp = head;

    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;

    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);

    Node *temp = head;

    for(int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    newnode->prev = temp;

    temp->next->prev = newnode;
    temp->next = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while(q--)
    {
        int x, v;
        cin >> x >> v;

        int sz = size(head);

        if(x < 0 || x > sz)
        {
            cout << "Invalid" << endl;
        }
        else if(x == 0)
        {
            insert_at_head(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }
        else if(x == sz)
        {
            insert_at_tail(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }
        else
        {
            insert_at_any_pos(head, x, v);
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}