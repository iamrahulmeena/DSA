#include <iostream>
using namespace std;

int insertionsort(int arr[],int n){

    // for (int i = 1; i <n ; i++)
    // {
    //     int key=arr[i];
    //     int j = i-1;
    //     for (; j  >= 0 ; j--)
    //     {
    //         if(arr[j]>key){
    //         arr[j+1]=arr[j];
    //         }

    //      else{
    //             break;
    //         }
    //     }
    //     arr[j+1]=key;
    // }

    for (int i = 1; i < n-1; i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}


int main(){
    int arr[]={5,6,9,7,1,5,7,8};
    int n=8;
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}