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
void display(Node*head)
{
    cout<< "The elements of the linked list are: "  <<endl;

    Node*p=head;
    while (p!=NULL)
    {
        cout<< p->data<<" ";
        // logic for traversing a linked list //
        p=p->next;
    }
    cout<<endl;

    /* To print the linked list in reverse order use a recursive function and print the values at returning time*/
}

Node * sort(Node*head)
{
    Node*p=NULL;
    Node*q=head;
    while(q!=NULL)
    {
        p=q;
        while(p!=NULL)
        {
            if(p->next!= NULL && p->data > p->next->data)
            {
                int temp;
                temp=p->data;
                p->data=p->next->data;
                p->next->data=temp;

                p=p->next;
            }
            else
                p=p->next;
        }

        q=q->next;
    }


    return head;
}

int main()
{
    int A[5]={24,15,68,78,98};
    first=create(first,A,5);

    display(first);
    Node *sortedHead;
    sortedHead=sort(first);
    display(sortedHead);

}