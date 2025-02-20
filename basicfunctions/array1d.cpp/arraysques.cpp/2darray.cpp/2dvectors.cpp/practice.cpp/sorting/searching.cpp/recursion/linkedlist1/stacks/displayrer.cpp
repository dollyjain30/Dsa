#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> &st)
{
    // if (st.size() == 0)
    //     return;
    // int x = st.top();
    // cout << x << " ";
    // st.pop();
    // print(st);
    // st.push(x);
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    print(st);
    cout << x << " ";
    st.push(x);
}
void pushAtbottom(stack<int> st, int val)
{
    if (st.size() == 0)
    {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtbottom(st, val);
    st.push(x);
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
    pushAtbottom(st, -10);
    print(st);
}