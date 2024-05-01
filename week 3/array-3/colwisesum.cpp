#include <iostream>
using namespace std;

int main(){

    int arr[3][3]={
                    {5,2,3},
                    {9,500,6},
                    {5,6,7}
                  }; 
int row=3;
int column=3;

int sum=0;

for (int j = 0; j < column; j++)
{
    for (int i = 0; i < row; i++)
    {
        sum=sum+arr[i][j];
    }


    cout<<"sum of column "<<j<<" is "<<sum<<endl;
    sum=0;
    
} 






}