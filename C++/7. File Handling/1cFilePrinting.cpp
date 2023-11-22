#include <fstream>
using namespace std;

int main()
{
    ofstream file("MyAndYou.txt",ios::app);

    file<<"Darshan Khainrar"<<endl;
    file<<"I am "<<24<<endl;
    file<<"Hello there"<<endl;

    file.close();
}