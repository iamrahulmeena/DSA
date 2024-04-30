#include <iostream>
using namespace std;

int main(){
    int arr[]={2,4,6,8,10,12,14};

    int target =10;

    int size=sizeof(arr)/4;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            cout<<"target found at index "<<i;
        }
        
    }
    
}