#include <iostream>
using namespace std;

template<typename T>
class List
{
    public:
        int size;
        T arr[1000];

        List()
        {

        }

        List(int s)
        {
            size = s;
        }

        void display()
        {
            for(int i = 0; i < size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void displayObject()
        {
            for(int i = 0; i < size; i++)
            {
                cout<<arr[i].roll_no<<" "<<arr[i].name<<" ";
            }
            cout<<endl;

        }
};

class Student{
    public:
        int roll_no;
        string name;

        Student()
        {

        }

        Student(int r,string n)
        {
            roll_no = r;
            name = n;
        }

};

int main()
{
    List<int> l1 = List<int>(5);
    l1.arr[0] = 21;
    l1.arr[1] = 4;
    l1.arr[2] = 52;
    l1.arr[3] = 63;
    l1.arr[4] = 22;

    l1.display();

    List<float> l2 = List<float>(3);

    l2.arr[0] = 52.63;
    l2.arr[1] = 634.456;
    l2.arr[2] = 52.778;

    l2.display();


    List<Student> l3 = List<Student>(3);
    l3.arr[0] = Student(1,"Darshan");
    l3.arr[1] = Student(2,"Sandip");
    l3.arr[2] = Student(3,"Ravi");

    l3.displayObject();


}