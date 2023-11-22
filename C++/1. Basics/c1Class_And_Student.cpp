#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr[5][2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr[i][j] = "ABSENT";
        }
    }
    string s;
    int count = 0;
    while(cin>>s)
    {
        count++;
        if(count > 10)
        {
            cout<<"INVALID INPUT";
            return 0;
        }
        if(s[0] == 'T')
        {
            if(s[1] == 'Y' && s[2] == '0' && (s[3] > '0' && s[3] <= '5'))
            {
                arr[s[3] - '1'][0] = s;
            }
            else
            {
                cout<<"INVALID INPUT"<<endl;
                return 0;
            }

        }
        else if(s[0] == 'S')
        {
            if(s[1] == 'Y' && s[2] == '0' && (s[3] > '0' && s[3] <= '5'))
            {
                arr[s[3] - '1'][1] = s;
            }
            else
            {
                cout<<"INVALID INPUT"<<endl;
                return 0;
            }

        }
        else
        {
            cout<<"INVALID INPUT"<<endl;
            return 0;
        }
    }
    for(int i = 0; i< 5; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout<<"["<<arr[i][j]<<"]";
        }
        cout<<endl;
    }
}
