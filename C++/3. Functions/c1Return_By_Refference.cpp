#include <iostream>
using namespace std;

int &return_ref(int &x)
{
    int &a = x;
    return a;
}
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<&n<<endl;

    cout<<return_ref(n)<<endl;
    return_ref(n)= 25;
    cout<<return_ref(n)<<endl;

}