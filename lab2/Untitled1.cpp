#include<iostream>


using namespace std;
void swapping(int *,int *);
int main()
{
    int n1,n2;
    cout<<"Enter first number:"<<endl;
    cin>>n1;
    cout<<"Enter second number:"<<endl;
    cin>>n2;


    swapping(&n1,&n2);

    return 0;
}

void swapping(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    cout<<"First="<<*n1<<" "<<"second="<<*n2<<endl;
}
