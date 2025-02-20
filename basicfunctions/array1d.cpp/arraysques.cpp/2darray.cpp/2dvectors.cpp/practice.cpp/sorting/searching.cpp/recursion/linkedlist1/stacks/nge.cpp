#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // pop ans push//

    int arr[] = {3, 2, 1, 4, 7, 6, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int nge[n];
    // for (int i = 0; i < n; i++)
    // {
    //     nge[i] = -1;
    //     for (int j = i + 1; j < n ; j++)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             nge[i] = arr[j];
    //             break;
    //         }
    //     }
    // }
    stack<int> st;
    // nge[n - 1] = -1;
    // st.push(nge[n - 1]);
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     while (st.size() > 0 && st.top() <= arr[i])
    //     {
    //         st.pop();
    //     }
    //     if (st.size() == 0)
    //         nge[i] = -1;
    //     else
    //         nge[i] = st.top();
    //     st.push(arr[i]);
    // }
    // stacks // lifo// last in first //
    int pge[n];
    pge[0] = -1;
    st.push(pge[0]);
    for (int i = 0; i < n; i++)
    {
        while (st.size() > 0 && st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.size() == 0)
            pge[i] = -1;
        else
            pge[i] = st.top();
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << pge[i] << " ";
    }

}