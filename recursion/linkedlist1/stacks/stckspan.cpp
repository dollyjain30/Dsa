#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // using stack previous greater element //
    //  previous greater index//
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    stack<int> st;
    int pge[n];
    pge[0] = -1;
    st.push(0);
    for (int i = 0; i < n; i++)
    {
        while (st.size() > 0 && arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        if (st.size() == 0)
            pge[i] = -1;
        else
            pge[i] = st.top();
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        pge[i] = i - pge[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << pge[i] << " ";
    }
    return 0;
}