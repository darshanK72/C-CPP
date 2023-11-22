#include <iostream>
using namespace std;

int main()
{
    int rows,column;

    cout<<"Enter Number of Rows and Columns : ";
    cin>>rows>>column;

    int mat1[rows][column];
    int mat2[rows][column];

    cout<<"Enter elements in row : ";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column ; j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter elements in row : ";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column ; j++)
        {
            cin>>mat2[i][j];
        }
    }
    int n;
    cout<<endl<<"Enter Correct Input for Performing Desired Operation"<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl;
    cout<<"Enter : ";
    cin>>n;

    int mat3[rows][column];
    
    switch(n)
    {
        case 1:
        {
            for(int i = 0; i < rows; i++)
            {
                for(int j = 0; j < column ; j++)
                {
                    mat3[i][j] = mat1[i][j] + mat2[i][j] ;
                }
            }
            break;
        }
        case 2:
        {
            for(int i = 0; i < rows; i++)
            {
                for(int j = 0; j < column ; j++)
                {
                    mat3[i][j] = mat1[i][j] - mat2[i][j] ;
                }
            }
            break;
        }
          case 3:
        {
            for(int i = 0; i < rows; i++)
            {
                for(int j = 0; j < column ; j++)
                {
                    mat3[i][j]=0; 
                    for(int k=0; k < column;k++)    
                    {    
                        mat3[i][j]+=mat1[i][k] * mat2[k][j];    
                    }    
                }    
            }
            break;
        }
    }

    cout<<endl<<"Your Answer :"<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column ; j++)
        {
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }

}