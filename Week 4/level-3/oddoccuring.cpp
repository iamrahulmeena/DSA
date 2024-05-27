#include <iostream>
using namespace std;

int oddoccuring(int arr[], int size){
    int start =0;
    int end=size-1;

while (start<=end)
{
    int mid=start+(end-start)/2;
    if (start==end)
    {
        return arr[end];
    }


    
    if (mid & 1)//mid is odd
    {
        if (arr[mid]==arr[mid-1])
        {
            start=mid+1;
        }

        else{
            end=mid-1;
        }
        
    }

    else{ //mid is even

        if (arr[mid]==arr[mid+1])
        {
           start=mid+2;
        }

        else{
            end=mid;
        }
        


    }
    
    
}
return -1;
}

int main(){
    int arr[]={1,1,5,5,2,2,3,3,2,4,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = oddoccuring(arr, size);
    cout<<ans;
}