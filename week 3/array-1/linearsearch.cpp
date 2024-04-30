#include<iostream>
using namespace std;

int main(){
    int arr[7]={2,4,6,8,10,12,14};

    int n=sizeof(arr)/4;
    int target=10;
    bool result=0;
    int address=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            result=1;
            address=i;
            break;
        }
        
        
    }


    if (result==1)
    {
        cout<<"target found at index no. "<<address;
    }
    else{
        cout<<"target not found";
    }
    
    
}