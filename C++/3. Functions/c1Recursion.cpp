#include <iostream>
using namespace std;

void recu(int n)
{
    if(n != 0)
    {
        recu(n - 1);
        cout<<n<<endl;
    }
}

int main()
{
    recu(10);

}