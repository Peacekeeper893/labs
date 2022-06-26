//Intersection Point of to linked list

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
}*first=NULL;
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
        cout<< p->data  <<endl;
        // logic for traversing a linked list //
        p=p->next;
    }


    /* To print the linked list in reverse order use a recursive function and print the values at returning time*/
}


int count(Node *p)
{
    int count=0;
    while (p!= NULL)
    {
        count++;
        p=p->next;
    }

    return count;

}

void findIntersection(Node* first,Node*second)
{
    Node*p=first;
    Node*q=second;

    int count1=count(p);
    int count2=count(q);

    if(count1>count2)
    {
        int diff=count1-count2;
        for(int i=0;i<diff;i++)
        {
            p=p->next;
        }

    }

    else if(count2>count1)
    {
        int diff=count2-count1;
        for(int i=0;i<diff;i++)
        {
            q=q->next;
        }
    }
    while(p!=NULL && q!=NULL)
        {
            if(p==q)
            {
                cout<<"Found the intersection with data "<<p->data;
                break;
            }
            else{
                p=p->next;
                q=q->next;
            }
        }

    if(p==NULL)
        {
            cout<<"Sorry Didn't find ant intersection";
        }

    


}

int main()
{

int A[6]={17,25,28,32,49,65};

first=create(first,A,6);
// display(first);


// Initialising
Node * second=new Node;
second->data=21;
Node*p=first;

Node *temp2=new Node;
temp2->data=24;
second->next=temp2;



temp2->next=p->next->next->next;


// Creating and Displaying Linked Lists //


findIntersection(first,second);


return 0;

}