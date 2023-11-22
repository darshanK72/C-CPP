#include <iostream> 
using namespace std;



template <class T>
T mymax(T a1,T a2)
{
    if(a1 > a2)
    {
        return a1;
    }
    else{
        return a2;
    }
}


int main()
{
    cout<<mymax<int>(20,23)<<endl;
    cout<<mymax<float>(23.5f,23.0f)<<endl;
    cout<<mymax<char>('h','x')<<endl;

}