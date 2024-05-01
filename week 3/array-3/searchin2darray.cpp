#include <iostream>
using namespace std;

int main(){

    int arr[3][3]={
                    {5,2,3},
                    {9,50,6},
                    {5,6,7}
                  }; 
int row=3;
int column=3;

int target=9;
bool found=0;
int indexi;
int indexj;


for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        if (arr[i][j]==target)
        {
            found=1;
            indexi=i;
            indexj=j;
        }
        
    }
    
}


//print result
if (found==1)
{
    cout<<"target found at index "<<indexi<<","<<indexj<<endl;;
}

else{
    cout<<"target not found";
}



}