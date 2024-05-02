#include <iostream>
#include <array>
using namespace std;

int main(){

    int arr[3][3]={
                    {5,2,3},
                    {9,500,6},
                    {5,6,7}
                  }; 
int row=3;
int column=3;

for (int i = 0; i < row; i++)
{ 
    for (int j = i; j < column; j++)
    {
      swap(arr[i][j],arr[j][i]);
    }
    
}

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    
}





}