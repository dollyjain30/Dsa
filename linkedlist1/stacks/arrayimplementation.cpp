#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int arr[5];
    int idx = -1;
    void push(int val)
    {
        if (idx == 4)
        {
            cout << "Stack is full";
        }
        idx++;
        arr[idx] = val;
    }
    void pop()
    {
        idx--;
    }
    int top()
    {
        return arr[idx];
    }
    int size()
    {
        return idx + 1;
    }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size();
    st.pop();
    cout << st.size();
}
//stacks // queues 