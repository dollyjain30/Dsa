#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkList{
    public:
    Node *head,*tail;
    LinkList(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        Node *temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }

    }
    void addfirst(int val){
        Node *temp=new Node(val);
        if(head==NULL) head=temp;
        else {
          temp->next=head;
          head=temp;
          }
        if(tail==NULL) tail=head;

    }
    void addlast(int val){
        Node * temp=new Node(val);
        if(tail==NULL) tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        if(head==NULL) head=tail;
    }
    void addindex(int idx,int val){
        if(idx==0) addfirst(val);
        else{
            idx--;
            Node * temp=head;

            while(idx--){
               temp=temp->next;
            }
            Node * t=new Node(val);
            t->next=temp->next;
            temp->next=t;
        }
    }
    void get(int idx){
        if(idx==0) cout<<head->val<<" ";
        else{
            Node *temp=head;
            while(idx--) temp=temp->next;
            cout<<temp->val<<" ";
        }

    }
    void deletenode(int idx){
        if(idx==0) head=head->next;
        else{
            Node * prev=NULL;
            Node * curr=head;
            while(idx--){
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            curr->next=NULL;

        }
    }
};
int main(){
LinkList ll;
ll.addfirst(10);
ll.addfirst(20);
ll.addlast(10);
ll.addlast(20);
ll.addindex(2,40);
ll.addindex(3,70);
ll.display();
cout<<endl;
ll.deletenode(0);
ll.deletenode(4);
ll.display();
}