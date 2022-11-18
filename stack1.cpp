#include "bits/stdc++.h"
using namespace std;
class Satck
{
    int *arr;
    int max_size;
    int top;

public:
    Satck(int size = 10)
    {
        arr = new int(size);
        max_size = size;
        top = -1;
    }

    // checking if Satck is full
    bool full()
    {
        return (top + 1) == max_size;
    }

    // checking if Satck is empty
    bool empty()
    {
        return top == -1;
    }

    // pushing data into a Stack
    void push(int data)
    {
        if (full())
        {
            cout << "Satck Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    // deleting data from Stack
    void pop()
    {
        if (empty())
        {
            cout << "Satck Underflow" << endl;
        }
        else
        {
            --top;
        }
    }

    // finding the top element of Stack
    int getTop()
    {
        if (empty())
        {
            cout << "Satck Underflow" << endl;
        }
        else
        {
            cout << arr[top] << endl;
        }
    }

    // printing the top element of Stack
    void print()
    {
        if (empty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            for (int i = 0; i < top + 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    // getting size of Stack
    int getSize()
    {
        return (top + 1);
    }

    // getting max size of Stack
    int getMaxSize()
    {
        return max_size;
    }
};

int main()
{
    Satck st = Satck(5);
    st.pop();
    st.push(10);
    st.push(20);
    st.push(30);
    st.getTop();
    cout << st.getSize() << endl;
    cout << st.getMaxSize() << endl;
    st.push(40);
    cout << st.getSize() << endl;
    st.print();

    return 0;
}