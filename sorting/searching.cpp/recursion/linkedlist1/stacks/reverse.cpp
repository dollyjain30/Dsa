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
int main()
{
    stack<int> st;
    stack<int> it;
    stack<int> rt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "The stack before reversing" << endl;
    print(st);
    while (st.size() > 0)
    {
        it.push(st.top());
        st.pop();
    }
    while (it.size() > 0)
    {
        rt.push(it.top());
        it.pop();
    }
    while (rt.size() > 0)
    {
        st.push(rt.top());
        rt.pop();
    }
    cout << endl;
    cout << "The stack after reversing" << endl;
    print(st);
}