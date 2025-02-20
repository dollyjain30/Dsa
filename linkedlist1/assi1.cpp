#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        next=NULL;

    }
};
class ll{
public:
node *head,*tail;
ll(){
    head=NULL;
    tail=NULL;
}
   void display(){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   }

   void  addFirst(int val){
    node *temp=new node(val);
    if(head==NULL) head=temp;
    else  {temp->next=head;
    head=temp;
    }
    if(tail==NULL) tail=head;
    
   }
   void addLast(int val){
    node *temp =new node(val);
    if(tail==NULL) tail=temp;
    else {tail->next=temp;
    tail=temp;}
    if(head==NULL) head=tail;
   }
};
int main(){
    ll l;
        l.addFirst(6);
        l.addFirst(5);
        l.addFirst(1);
        l.display();
        cout<<endl;
        l.addLast(2);
        l.addLast(3);
        l.display();
    return 0;
}