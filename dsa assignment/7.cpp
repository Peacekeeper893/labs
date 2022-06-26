#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
}*first=NULL,*second=NULL,*third=NULL;
// creating the linked list using the global first Node pointer
Node* create(Node *p,int A[],int n)
{
    Node *temp,*last;
    
    last=new Node;
    p=new Node;
    p->data=A[0];
    p->next=NULL;
    last=p;

    for (int i = 1; i < n; i++)
    {
        temp=new Node;
        temp->data=A[i];
        temp->next = NULL;
        // last pointer always stays one node behund the first pointer //
        last->next=temp;
        last=temp;
    }
return p;
    
}
void display(Node*p)
{
     cout<< "The elements of the linked list are: "  <<endl;
    while (p!=NULL)
    {
        cout<< p->data<<" ";
        // logic for traversing a linked list //
        p=p->next;
    }
    cout<<endl;

    /* To print the linked list in reverse order use a recursive function and print the values at returning time*/
}

void merge(Node*p,Node*q)
{
    Node *last;
    if (p->data<q->data)
    {
        third=p;
        last=p;
        p=p->next;
    }
    else
    {
        third=q;
        last=q;
        q=q->next;
    }

    while (p!=NULL && q!=NULL)
    {
        if (p->data < q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }   
    }
    if (p!=NULL)
    last->next=p;
    else 
    last->next=q;
    
    
    
    
}
int main()
{

int A[5]={17,25,28,32,49};
int B[4]={10,14,19,27};

// Creating and Displaying Linked Lists //
first=create(first,A,5);
display(first);
second=create(second,B,4);
display(second);

merge(first,second);
display(third);



return 0;

}