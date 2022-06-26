#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    Node* next;
}*first=NULL,*second=NULL,*third=NULL;
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




void reverse_slide(Node *p)
{
    Node* q=NULL;
    Node* r=NULL;

    while (p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

int main()
{
    int A[6]={17,25,25,28,32,49};

    first=create(first,A,6);
display(first);


 reverse_slide(first);      
 display(first);
}