#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // pop ans push//

    int arr[] = {4, 13, 11, 5, 9, 7, 8, 6};
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
// st.push(arr[n - 1]); // This push doesn't actually make sense and seems like an error
// for (int i = n - 2; i >= 0; i--)
// {
//     while (st.size() > 0 && st.top() >= arr[i])
//     {
//         st.pop();  // Pop elements that are not greater than arr[i]
//     }

//     if (st.size() == 0)
//         nge[i] = -1;  // No greater element to the right
//     else
//         nge[i] = st.top();  // The next greater element is the top of the stack

//     st.push(arr[i]);  // Push the current element onto the stack
// }

    // stacks // lifo// last in first //
    int pge[n];
    pge[0] = -1;
    st.push(n);
    for (int i = 0; i < n; i++)
    {
        while (st.size() > 0 && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        if (st.size() == 0)
            pge[i] = n;
        else
            pge[i] = st.top();
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << pge[i] << " ";
    }


}