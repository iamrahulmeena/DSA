#include<iostream>
using namespace std;

int main(){
    int arr[10]={24,621,5,4,789,79,7,9,7,8};
    int size=10;

    int temp=arr[size-1];
    for (int i = size-1; i > 0; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[0]=temp;





    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
