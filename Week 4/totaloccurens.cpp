#include <iostream>
using namespace std;

int first(int arr[],int target,int size){
    int start=0;
    int end=size-1;
    int ansfirst=-1;

    while (start<=end)
    {
        int mid = start + (end - start) / 2;
        if (target==arr[mid])
        {
            ansfirst=mid;
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
    return ansfirst;
    
}

int last(int arr[],int target,int size){
    int start=0;
    int end=size-1;
    int anslast=-1;

    while (start<=end)
    {
        int mid = start + (end - start) / 2;
        if (target==arr[mid])
        {
            anslast=mid;
            start=mid+1;
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
    return anslast;
    
}

int main(){
    int arr[]={10,20,30,30,30,30,40,50};
    int target=30;
    int size=sizeof(arr)/4;
    int ansfirst = first(arr, target, size);
    int anslast = last(arr, target, size);

    cout << anslast - ansfirst + 1; 
    return 0;
}