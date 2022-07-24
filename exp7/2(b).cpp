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
void rearrange(Node * head)
{

    Node *p=head;
    Node *q =head->next;

    while(q!= NULL)
    {
        int temp=p->data;
        p->data=q->data;
        q->data=temp;

        if(q->next!=NULL)
        {
            p=p->next->next;
            q=q->next->next;
        }
    }
}



int main()
{
    int A[5]={2,4,9,15,18};
    first=create(first,A,5);
    display(first);

    rearrange(first);
    display(first);



}

