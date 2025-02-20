#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> st)
{
    stack<int> temp;
    while (st.size() > 0)
    {

        int x = st.top();
        st.pop();
        temp.push(x);
    }
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
}
void pushAtBottom(stack<int> &st, int val)
{
    stack<int> t;
    while (st.size() > 0)
    {
        t.push(st.top());
        st.pop();
    }
    st.push(val);
    while (t.size() > 0)
    {
        st.push(t.top());
        t.pop();
    }
}
void pushAtIdx(stack<int> &st, int val, int idx)
{
    stack<int> t;
    while (st.size() > idx)
    {
        t.push(st.top());
        st.pop();
    }
    st.push(val);
    while (t.size() > 0)
    {
        st.push(t.top());
        t.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout << endl;
    pushAtBottom(st, 80);
    print(st);
    cout << endl;
    pushAtIdx(st, 110, 3);
    print(st);
}
