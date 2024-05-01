#include<iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout<<"enter no. of row"<<endl;
    cin>>row;
    cout<<"enter no. of col"<<endl;
    cin>>col;
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"enter element for "<<i<<"th row and "<<j<<"th column "<<endl;
            cin>>arr[i][j];
        }
        
    }




//print

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}