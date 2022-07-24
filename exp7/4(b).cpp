#include <bits/stdc++.h>

using namespace std;

struct PolynomialNode
{
    int exp;
    int coeff;
    PolynomialNode *next;

} *first = NULL, *second = NULL;

bool compare(PolynomialNode *first, PolynomialNode *second)
{
    PolynomialNode *p = first;
    PolynomialNode *q = second;
    bool flag = true;

    while (p != NULL && q != NULL)
    {
        if (p->exp > q->exp)
        {
            flag = false;
            break;
        }
        else if (q->exp > p->exp)
        {
            flag = false;
            break;
        }
        else
        {
            if (p->coeff != q->coeff)
            {
                flag = false;
                break;
            }
            else
            {
                p = p->next;
                q = q->next;
            }
        }
    }
    return flag;
}

int main()
{
    // initialising first
    first = new PolynomialNode;
    first->coeff = 4;
    first->exp = 2;

    PolynomialNode *temp = new PolynomialNode;
    temp->coeff = 3;
    temp->exp = 1;
    first->next = temp;

    PolynomialNode *temp2 = new PolynomialNode;
    temp2->coeff = 6;
    temp2->exp = 0;
    temp->next = temp2;
    temp2->next = NULL;

    // initialising second
    second = new PolynomialNode;
    second->coeff = 2;
    second->exp = 1;

    PolynomialNode *temp3 = new PolynomialNode;
    temp3->coeff = 6;
    temp3->exp = 0;
    second->next = temp3;
    temp3->next = NULL;

    if (compare(first, second))
    {
        cout << "They are same";
    }
    else
        cout << "They are different";
}