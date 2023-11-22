#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter Order of First Matrix : ";
    cin >> r1 >> c1;
    cout << "Enter Order of Second Matrix : ";
    cin >> r2 >> c2;
    int a[r1][c1];
    cout<<"Enter Elements of First Matrix : ";
    {
        for(int i = 0; i< r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                cin>>a[i][j];
            }
        }
    }
    cout<<endl;
    int b[r2][c2];
    cout<<"Enter Elements of Second Matrix : ";
    {
        for(int i = 0; i< r2; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                cin>>b[i][j];
            }
        }
    }

    for(int i = 0; i< r2; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    cout<<endl;
    for(int i = 0; i< r2; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    cout<<endl;
    int c[r1][c2];

    if (c1 != r2)
    {
        cout << "Invalid Matrix Order for multiplication" << endl;
    }
    else
    {
        int s = 0;
        for (int m = 0; m < r1; m++)
        {

            for (int n = 0; n < c2; n++)
            {
                for (int k = 0; k < c1; k++)
                {
                    s += (a[m][k] * b[k][n]);
                }
                c[m][n] = s;
                s = 0;
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
}