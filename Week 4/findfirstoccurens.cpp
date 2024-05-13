#include <iostream>
using namespace std;

void Binarysearch(int arr[],int target,int size){
    int start=0;
    int end=size-1;
    int ans=-1;

    

    while (start<=end)
    {
        int mid = start + (end - start) / 2;
        if (target==arr[mid])
        {
            ans=mid;
            end=mid-1;
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
    
    std::cout << ans;

    
    
}

int main(){
    int arr[]={10,20,30,30,30,30,40,50};
    int target=30;
    int size=sizeof(arr)/4;

    Binarysearch(arr,target,size);
}