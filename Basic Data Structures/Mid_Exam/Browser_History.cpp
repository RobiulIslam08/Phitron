#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node *head = NULL;
Node *tail = NULL;
Node *cur = NULL;

void insert_at_tail(string val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    string s;

    while (cin >> s && s != "end")
    {
        insert_at_tail(s);
    }

    cur = head;

    int q;
    cin >> q;

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string address;
            cin >> address;

            Node *temp = head;
            bool found = false;

            while (temp != NULL)
            {
                if (temp->val == address)
                {
                    found = true;
                    cur = temp;
                    break;
                }
                temp = temp->next;
            }

            if (found)
            {
                cout << cur->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            if (cur->next != NULL)
            {
                cur = cur->next;
                cout << cur->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (cur->prev != NULL)
            {
                cur = cur->prev;
                cout << cur->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}