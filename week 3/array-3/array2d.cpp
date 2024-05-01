#include <iostream>
using namespace std;



void print2darray(int arr[][3],int row,int col){
  //print 2d array

for (int i = 0; i < row; i++)
{
  for (int j = 0; j < col; j++)
  {
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}
}

int main(){
    //creation
    // int arr[5][3];


    //inlitialse
    int arr[3][3]={
                    {5,2,3},
                    {9,50,6},
                    {5,6,7}
                  }; 

    int row =3;
    int col =3;

print2darray(arr,row,col);


}