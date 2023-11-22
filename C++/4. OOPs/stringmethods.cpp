#include <iostream>
using namespace std;

int main()
{
    string s1 = "hello this is my home";
    string s2 = "aeasa sfa s asdfa sdasdfasd ";

    cout << s1.length() << endl;

    cout << s1.compare(s2) << endl;

    s1.swap(s2);
    cout << s1 << endl;

    cout << s1.substr(8, 10) << endl;
    cout << s1.size() << endl;
    s1.resize(50);
    cout << s1.size() << endl;

    s1.replace(6, 11, "hello Worldsdfg");
    cout << s1 << endl;

    cout << s1[3] << endl;
    cout << s1.at(3) << endl;

    string s3 = "hello this is my home, hello this is my home, hell this is my home";
    s3.insert(6, "my");
    cout << s3 << endl;
    s3.assign("World");
    cout << s3 << endl;

    cout << s3.front() << endl;
    cout << s3.back() << endl;

    string s4 = "";
    for (int i = s3.length() - 1; i >= 0; i--)
    {
        s4.push_back(s3[i]);
    }
    cout << s4 << endl;
}