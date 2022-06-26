// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code
        int res=-1;

        int curr_size=q1.size();
        for (int i = 0; i < curr_size-1; i++)
        {
            q2.push(q1.front());
            q1.pop();
            
        }
        
        if(q1.empty()==false)
        {
            res=q1.front();
            q1.pop();
        }

        if(q2.empty()==false)
        {
            for (int i = 0; i < curr_size-1; i++)
                {
                    q1.push(q2.front());
                    q2.pop();
                    
                }
        }
           

            
        return res;
          
}
