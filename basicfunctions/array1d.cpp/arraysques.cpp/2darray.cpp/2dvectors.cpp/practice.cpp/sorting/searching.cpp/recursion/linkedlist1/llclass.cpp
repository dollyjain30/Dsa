#include <iostream>
using namespace std;
class Node // user defined data type
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        (*this).val = val;
        this->next = NULL;
    }
};
class LinkedList
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val)
    {
        Node *temp = new Node(val);
        if (size < 0 || size < idx)
        {
            cout << "invalid insertion " << endl;
        }
        else if (size == 0)
        {
            insertAtHead(val);
        }
        else if (size == idx)
        {
            insertAtTail(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getIdx(int idx)
    {

        if (idx == 0)
            return head->val;
        else if (idx >= size || size < 0)
        {
            cout << "invalid index";
            return -1;
        }
        else if (idx == size)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAthead()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAttail()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteatindex(int idx)
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        else if (idx < 0 || size <= idx)
        {
            cout << "invalid index";
            return;
        }
        else if (idx == 0)
        {
            return deleteAthead();
        }
        else if (idx == size - 1)
        {
            return deleteAttail();
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList ll;
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.display();
    ll.insertAtHead(100);
    ll.insertAtHead(200);
    ll.insertAtHead(700);
    ll.display();
    ll.insertAtIdx(2, 70);
    ll.display();
    // cout << ll.getIdx(3);
    ll.deleteAthead();
    ll.display();
    ll.deleteAttail();
    ll.display();
    ll.deleteatindex(5);
    ll.display();
    return 0;
}