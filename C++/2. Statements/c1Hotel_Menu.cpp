#include <bits/stdc++.h>
using namespace std;


int main()
{
    char c;
    int n;
    cin>>c;
    cin>>n;

    string output = "";

    if(c == 'c' || c == 'C')
    {
        if(n == 1)
        {
            output = "Espresso Coffee";
        }
        else if(n == 2)
        {
            output = "Cappuccino Coffee";
        }
        else if(n == 3)
        {
            output = "Latte Coffee";
        }
        else
        {
            cout<<"INVALID INPUT"<<endl;
            return 0;
        }
    }
    else if(c == 't' || c == 't')
    {
        if(n == 1)
        {
            output = "Plain Tea";
        }
        else if(n == 2)
        {
            output = "Assam Tea";
        }
        else if(n == 3)
        {
            output = "Ginger Tea";
        }
        else if(n == 4)
        {
            output = "Cardamom Tea";
        }
        else if(n == 5)
        {
            output = "Masala Tea";
        }
        else if(n == 6)
        {
            output = "Lemon Tea";
        }
        else if(n == 7)
        {
            output = "Green Tea";
        }
        else if(n == 8)
        {
            output = "Organic Darjeeling Tea";
        }
        else
        {
            cout<<"INVALID INPUT"<<endl;
            return 0;
        }

    }
    else if(c == 's' || c == 'S')
    {
        if(n == 1)
        {
            output = "Hot and Sour Soup";
        }
        else if(n == 2)
        {
            output = "Veg Corn Soup";
        }
        else if(n == 3)
        {
            output = "Tomato Soup";
        }
        else if(n == 4)
        {
            output = "Spicy Tomato Soup";
        }
        else
        {
            cout<<"INVALID INPUT"<<endl;
            return 0;
        }

    }
    else if(c == 'b' || c == 'b')
    {
        if(n == 1)
        {
            output = "Hot Chocolate Drink";
        }
        else if(n == 2)
        {
            output = "Badam Drink";
        }
        else if(n == 3)
        {
            output = "Badam-Pista Drink";
        }
        else
        {
            cout<<"INVALID INPUT";
            return 0;
        }

    }
    else
    {
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }
    cout<<"Welcome to CCD"<<endl;
    cout<<"Enjoy your "<<output<<endl;
}