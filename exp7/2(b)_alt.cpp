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
int getcount(Node *p)
{
    int count=0;
    Node *q = p;
    while (q!= NULL)
    {
        count++;
        q=q->next;
    }
    return count;
}

Node* rearrange(Node * head)
{
    int count = getcount(head);
    count/=2;
    Node *last,*p=head;
    for(int i=0;i<count;i++)
    {
        Node*q=p;
        Node*r=p->next;

        if(p->next!=NULL)   p=p->next->next;
        if(i==0)    head=r;
        if(i!=0)    last->next=r;

        r->next=q;
        q->next=p;
        last=q;       
    }
    return head;

}

int main()
{
    int A[6]={2,4,9,15,18,24};
    first=create(first,A,6);
    display(first);

    first=rearrange(first);
    display(first);



}

