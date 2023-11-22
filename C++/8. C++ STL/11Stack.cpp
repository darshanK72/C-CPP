#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    for(int i = 1; i <= 10; i++)
    {
        st.push(i);
    }

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    stack<int> st1;
    st1.push(20);
    st1.push(22);


    stack<int> st2 = st1;

    while(!st2.empty())
    {
        cout<<st2.top()<<endl;
        st2.pop();
    }
    

}