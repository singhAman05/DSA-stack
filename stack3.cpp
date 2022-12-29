// Remove k adjacent elements from a string

#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cout << "Enter a string to remove k adjacent elements from a sting :- ";
    cin >> s;
    cout << "Enter the number of adjacent to be removed :- ";
    int k;
    cin >> k;
    int n = k;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
            k--;
        }
        else
        {
            if (st.top() == s[i] && k > 1)
            {
                st.push(s[i]);
                k--;
            }
            else if (st.top() == s[i] && k == 1)
            {
                while (k != n)
                {
                    st.pop();
                    k++;
                }
            }
            else
            {
                k = n;
                st.push(s[i]);
                k--;
            }
        }
    }
    s = "";
    while (!st.empty())
    {
        s = st.top() + s;
        st.pop();
    }
    cout << "The remaining string is :- " << s << endl;

    return 0;
}