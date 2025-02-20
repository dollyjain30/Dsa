#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        (*this).val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;
    Deque()
    {
        head = tail = NULL;
        size = 0;
    }
    void pushback(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void pushfront(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;

            head = temp;
        }
        size++;
    }

    void popfront()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        else if (size == 1)
        {
            popfront();
            return;
        }
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
    }
    void popback()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        else if (size == 1)
        {
            popfront();
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
    int front()
    {
        if (size == 0)
        {
            cout << "Queue is Empty";
            return -1;
        }
        return head->val;
    }
    int back()
    {

        if (size == 0)
        {
            cout << "Queue is Empty";
            return -1;
        }
        return tail->val;
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
    Deque q;
    q.pushback(10);
    q.pushback(20);
    q.pushback(30);
    q.pushback(40);
    q.popback();
    q.display();

    return 0;
}