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

class MyStack
{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;

        void push(int val)
        {
              sz++;
            Node *newnode = new Node(val);
            if(head == NULL)
            {
                head = newnode;
                tail = newnode;
                return;

            }
            else{
                tail->next = newnode;
                newnode->prev = tail;
                tail = newnode;
            }
          
        }

        void pop()

        {
            sz--;
             Node* deletenode = tail;
            tail = tail->prev;
            delete deletenode;
            if(tail == NULL)
            {
                head = NULL;
                return;
            }
            tail->next = NULL;
        
        }

        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            return head == NULL;
        }
};

class MyQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)      
    {
        sz++;
        Node* newnode = new Node(val);
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
    void pop()         
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front()         
    {
        return head->val;
    }
    int back()          
    {
        return tail->val;
    }
    int size()         
    {
        return sz;
    }
    bool empty()       
    {
        return head == NULL;
    }

};
int main()
{
    MyStack st;
    MyQueue q;
     int n, m;
    cin >> n >> m;

    int v;

    for(int i = 0; i<n; i++)
    {
        cin >> v;
        st.push(v);
    }
    for(int i = 0; i<m; i++)
    {
        cin >> v;
        q.push(v);
    }
 
    bool flag = true;
    if(st.size() == q.size()) 
    {
        while (!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();

        }
        if(flag == true)
        {
            cout << "YES" << endl;

        }else{
            cout << "NO" << endl;

        }
        
    }
    else{
        cout <<"NO" << endl;
    }
    return 0;


    return 0;
}