#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {23,223,245234,243456,23534,867};

    int *ptr = arr;
    int **ptr2 = &ptr;

    cout<<*ptr2<<endl;
    cout<<*ptr<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<*(ptr + i)<<endl;
    }
    
    return 0;
}