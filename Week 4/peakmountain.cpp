#include <iostream>
using namespace std;

void Binarysearch(int arr[],int size){
    int start=0;
    int end=size-1;

    

    while (start<=end)
    {
       int mid=start+(end-start)/2;

       if (arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
       {
        
       }
       
        
    }
    
    cout<<"not found";
    
}

int main(){
    int arr[]={10,20,50,40,30};
    int size=sizeof(arr)/4;

    Binarysearch(arr,size);
}