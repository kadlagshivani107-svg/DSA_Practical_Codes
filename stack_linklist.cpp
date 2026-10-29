#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};
class stack{
    private:
    node*top;
    public:
    stack(){
      top=NULL;  
    }
    int empty(){
        if (top==NULL)
{
    return 1;
}   
else
{
    return 0;
} 
}
void push(int x){
    node*p=new node(x);
    p->next=top;
    top=p;
}
int pop(void){
    int x=top->data;
    node*p=top;
    top=top->next;
    delete p;
    return x;
}
int peek(){
    return top->data;
}
void display(){
    node*q=top;
    while(q!=NULL){
        cout<<endl<<q->data;
        q=q->next;
    }
}
};
int main(){
    int x;
    stack s;
    s.push(678);
    s.push(978);
    s.push(239);
    s.push(853);
    s.push(906);
    s.push(543);
    s.display();
    if(!s.empty()){
        x=s.pop();
        cout<<endl<<"Removed"<<x;
    }
    s.display();
    x=s.peek();
    cout<<endl<<"Top Elements is:"<<x;
    return 0;
}

/*PS D:\shivani kadlag> cd "d:\shivani kadlag\" ; if ($?) { g++ stack_linklist.cpp -o stack_linklist } ; if ($?) { .\stack_linklist }

543
906
853
239
978
678
Removed543
906
853
239
978
678
Top Elements is:906 */