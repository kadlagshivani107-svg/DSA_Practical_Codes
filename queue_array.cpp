#include <iostream>
using namespace std;
const int MAX=5;
class queue
{
private:
    int a[MAX];
    int front;
    int rear;
    public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    int empty(void)
    {
        if(front==-1 && rear==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int full(void)
    {
        if(rear==MAX-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enqueue(int x)
    {
        if (full())
        {
            cout<<"\nQueue is full";
            return;
        }
        if (front==-1 && rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        a[rear]=x;
    }
    int dequeue(void)
    {
        if(empty())
        {
            cout<<"\nQueue is empty";
            return-1;
        }
        int x=a[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
        return x;
    }
    int peek(void)
    {
        if (empty())
        {
            cout<<"\nQueue is empty";
            return -1;
        }
        return a[front];
    }
    void display(void)
    {
        if (empty())
        {
            cout<<"\nQueue is empty";
            return;
        }
        cout<<"\nQueue elements:";
        for(int i=front;i<=rear;i++)
        {
            cout<<"\t"<<a[i];
        }
    }
};
int main()
{
    int x;
    queue q;
    q.enqueue(56);
    q.enqueue(48);
    q.enqueue(60);
    q.enqueue(26);
    q.enqueue(98);
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
/*PS D:\shivani kadlag> cd "d:\shivani kadlag\" ; if ($?) { g++ queue_array.cpp -o queue_array } ; if ($?) { .\queue_array }

Queue elements: 56      48      60      26      98
Removed:56
Queue elements: 48      60      26      98
Front element is:48
PS D:\shivani kadlag> */