#include <iostream>
using namespace std;

int* Pointer_Function(int n)
{
    int* p = new int[n];
    cout<<p<<endl;
    cout<<"Enter array Elemtnts : ";
    for(int i = 0; i< n; i++)
    {
        cin>>p[i];
    }
    return p;
}
int main()
{
    int n; 
    cout<<"Enter Size of Array: ";
    cin>>n;
    int* ptr = Pointer_Function(n);
    cout<<ptr<<endl;
    for(int i = 0; i< n; i++)
    {
        cout<<*(ptr + i)<<endl;
    }

}