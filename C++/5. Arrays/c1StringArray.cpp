#include <iostream>

using namespace std;

int main()
{
    int a,b;
    //String arry
    string arr[] = {"one","two","three","four","five","six","seven","eight","nine","ten"};

    cout<<"Enter two Numbers"<<endl;
    cin>>a>>b;

    for(int i = (a-1); i<= (b) ; i++)
    {
        if(i < 9)
            cout<<arr[i]<<endl;
        if(i >= 10)
        {
            if(i%2 == 0)
                cout<<"even"<<endl;
            if(i%2 != 0)
                cout<<"odd"<<endl;
        }
    }

}