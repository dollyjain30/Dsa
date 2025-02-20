#include <iostream>
#include <stack>
using namespace std;
void remove(int k, stack<int> &st)
{
    stack<int> t;
    int n = st.size();
    while (st.size() > k)
    {
        t.push(st.top());
        st.pop();
    }
    st.pop();
    while (t.size() > 0)
    {
        st.push(t.top());
        t.pop();
    }
}
int main()

{
    stack<int> st;
    stack<int> temp;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.size() << endl;

    while (st.size() > 0)
    {
        cout << st.top() << " ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
    remove(3, st);
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    // while (temp.size() > 0)
    // {

    //     int x = temp.top();
    //     cout << x << " ";
    //     temp.pop();
    //     st.push(x);
    // }
}