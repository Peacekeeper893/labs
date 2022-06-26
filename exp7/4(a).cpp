#include<bits/stdc++.h>

using namespace std;

struct PolynomialNode
{
    int exp;
    int coeff;
    PolynomialNode* next;

}*first=NULL,*second=NULL;

PolynomialNode *addPoly(PolynomialNode *first,PolynomialNode *second)
{
    PolynomialNode*p=first;
    PolynomialNode*q=second;
    PolynomialNode* res;

    PolynomialNode*last=NULL;

    while (p!=NULL && q!=NULL)
    {
        PolynomialNode*temp=new PolynomialNode;
            if(last==NULL)
                res=temp;
            else
                last->next=temp;



        if(p->exp > q->exp)
        {
           temp->exp=p->exp;
           temp->coeff=p->coeff;
           last=temp;
           p=p->next;
           

        }
        else if (q->exp > p->exp)
        {
            temp->exp=q->exp;
           temp->coeff=q->coeff;
           last=temp;
           q=q->next;
           
           
        }
        else{
            temp->coeff=(p->coeff + q->coeff);
            temp->exp=q->exp;
            last=temp;
            p=p->next;
            q=q->next;

        }
    
    }
    
    if(p==NULL && q!=NULL)
    {
        while(q!=NULL)
        {
            PolynomialNode*temp=new PolynomialNode;
                last->next=temp;


            temp->coeff=(q->coeff);
            temp->exp=q->exp;
            last=temp;
            q=q->next;
        }
        last->next=NULL;
    }
    
        if(p!=NULL && q==NULL)
    {
        while(p!=NULL)
        {
            PolynomialNode*temp=new PolynomialNode;
            last->next=temp;


            temp->coeff=(p->coeff);
            temp->exp=p->exp;
            last=temp;
            p=p->next;
        }
        last->next=NULL;

    }
    if(p==NULL && q==NULL)
        last->next=NULL;
    


    return res;

}

int main()
{
    // initialising first
first=new PolynomialNode;
first->coeff=4;
first->exp=2;

PolynomialNode *temp=new PolynomialNode;
temp->coeff=3;
temp->exp=1;
first->next=temp;

PolynomialNode *temp2=new PolynomialNode;
temp2->coeff=8;
temp2->exp=0;
temp->next=temp2;
temp2->next=NULL;


// initialising second
second=new PolynomialNode;
second->coeff=7;
second->exp=4;

PolynomialNode *temp3=new PolynomialNode;
temp3->coeff=3;
temp3->exp=2;
second->next=temp3;
temp3->next=NULL;


PolynomialNode* res;
res=addPoly(first,second);

PolynomialNode*it=res;
while(it!=NULL)
    {
        cout<<it->coeff<<" x^"<<it->exp<<"+"<<endl;
        it=it->next;

    }


}