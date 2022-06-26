#include<iostream>

using namespace std;

struct PolynomialNode
{
    int exp;
    int coeff;
    PolynomialNode* next;

}*first=NULL,*second=NULL;

PolynomialNode * multiply(PolynomialNode* first, PolynomialNode*second)
{
   PolynomialNode*p=first;
   PolynomialNode*q=second;
   PolynomialNode*last=NULL;
   PolynomialNode*result=new PolynomialNode;
//    result->next=NULL;
   while(p!=NULL)
    {
        q=second;
        while(q!=NULL)
        {
            // if(result->next==NULL)

            PolynomialNode*temp=new PolynomialNode;
            if(last==NULL)
                result=temp;
            else
                last->next=temp;
                
            temp->coeff=(p->coeff * q->coeff);
            temp->exp=(p->exp + q->exp);
            temp->next=NULL;
            last=temp;


            q=q->next;
        }

    p=p->next;
    }


    return result;
}


PolynomialNode * order(PolynomialNode * res)
{
    PolynomialNode*p=res;
    PolynomialNode*last=res;
    PolynomialNode*orderedres;

while(p!=NULL)
{

    PolynomialNode*temp=new PolynomialNode;
            if(last==NULL)
                orderedres=last;
            else
                last->next=temp;


            if(p->next != NULL && p->next->exp != p->exp) 
            {
                temp->coeff=p->coeff;
                temp->exp=p->exp;
                temp->next=NULL;
                last=temp;

                p=p->next;
            }
            else
            {
                while(p->next != NULL && p->next->exp==p->exp)
                {
                        
                        p->next->coeff=p->coeff+p->next->coeff;
                        last=p->next;
                        p=p->next;
                        
                        
                }
                if(p->next==NULL)
                    p=p->next;
                // last=temp;
            }


}

    return orderedres;

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
temp2->coeff=6;
temp2->exp=0;
temp->next=temp2;
temp2->next=NULL;


// initialising second
second=new PolynomialNode;
second->coeff=2;
second->exp=1;

PolynomialNode *temp3=new PolynomialNode;
temp3->coeff=6;
temp3->exp=0;
second->next=temp3;
temp3->next=NULL;

PolynomialNode*res;
res=multiply(first,second);

// PolynomialNode*it=res;
// while(it!=NULL)
//     {
//         cout<<it->coeff<<" x^"<<it->exp<<"+"<<endl;
//         it=it->next;

//     }

PolynomialNode*orderedres;
orderedres=order(res);

PolynomialNode*it=orderedres;
while(it!=NULL)
    {
        cout<<it->coeff<<" "<<it->exp<<endl;
        it=it->next;

    }


}