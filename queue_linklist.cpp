#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class queue
{
    private:
    node*front;
    node*rear;
    public:
    queue()
    {
        front=rear=NULL;
    }
    int empty(void)
    {
        if (front==NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int peek(void)
    {
        if(empty())
        {
            cout<<"\nQueue is empty";
            return-1;
        }
        return front->data;
    }
    void enqueue(int x)
    {
        node*p=new node(x);
        if(front==NULL)
        {
            front=p;
            rear=p;
        }
        else 
        {
        rear->next=p;
        rear=p;
        }
    }
    int dequeue(void)
    {
        if (empty())
        {
            cout<<"\nQueue is empty";
            return-1;
        }
        int x=front->data;
        node*p=front;
        front=front->next;
        if(front==NULL)
        {
            rear=NULL;
        }
        delete p;
        return x;
    }
    void display(void)
    {
        node*q=front;
        cout<<"\nQueue elements:";
        while(q!=NULL)
        {
            cout<<"\t"<<q->data;
            q=q->next;
        }
    }
};
int main()
{
    int x;
    queue q;
    q.enqueue(47);
    q.enqueue(84);
    q.enqueue(37);
    q.enqueue(97);
    q.enqueue(17);
    q.enqueue(64);
    q.display();
    if (!q.empty())
    {
        x=q.dequeue();
        cout<<"\nRemoved:"<<x;
    }
    q.display();
    x=q.peek();
    cout<<"\nFront element is:"<<x;
    return 0;
}
/*PS D:\shivani kadlag> cd "d:\shivani kadlag\" ; if ($?) { g++ queue_linklist.cpp -o queue_linklist } ; if ($?) { .\queue_linklist }

Queue elements: 47      84      37      97      17      64
Removed:47
Queue elements: 84      37      97      17      64
Front element is:84
PS D:\shivani kadlag> */