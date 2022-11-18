// Reversing a string using stack

// #include "bits/stdc++.h"
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     stack<char> st;
//     for (int i = 0; i < s.size(); i++)
//     {
//         st.push(s[i]);
//     }
//     s = "";
//     while (!st.empty())
//     {
//         s = s + st.top();
//         st.pop();
//     }
//     cout << s << endl;

//     return 0;
// }

#include "bits/stdc++.h"
using namespace std;
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            st.push(s[i]);
        }
        s.clear();
        while (!st.empty())
        {
            s.push_back(st.top());
        }
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it;
        }
    }
};

int main()
{
    Solution ss;
}