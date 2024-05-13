#include <iostream>
using namespace std;

void Binarysearch(int arr[],int target,int size){
    int start=0;
    int end=size-1;

    

    while (start<=end)
    {
        int mid = start + (end - start) / 2;
        if (target==arr[mid])
        {
            cout<<mid;
            return;
        }

        else if (target>arr[mid])
        {
            start=mid+1;
        }

        else if (target<arr[mid])
        {
            end=mid-1;
        } 
        
    }
    
    cout<<"not found";
    
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target=80;
    int size=sizeof(arr)/4;

    Binarysearch(arr,target,size);
}