#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node * next;
};

class Stack
{
    private:
       Node*top=NULL;
    public:

    void push(int element)
    {
        Node*t;
        t=new Node;
        if (t==NULL)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            t->data=element;
            t->next=top;
            top=t;
        }
    }
    void pop()
    {
        if (top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            Node *p;
            p=top;
            top=top->next;
            delete p;
        }  
    }
    void display()
    {
        cout<<"Currently the stack looks like: "<<endl;
        Node *p=top;
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<"\n";
    }
    int peek(int index)
    {
        Node*p=top;
        for (int i = 0; i < index-1 && p!=NULL; i++)
        {
            p=p->next;
        }
        
        if (p!=NULL)
        {
            return p->data;
        }
        else 
            return -1;
    }
};


int main()
{

    Stack s1;
    s1.push(5);
    s1.push(6);
    s1.push(8);
    s1.display();
    s1.pop();
    cout<<"THE value stored in the stack is: "<<s1.peek(1)<<endl;
    //the argument passed isn't the index just the nth element to be peeked 
    s1.display();


}