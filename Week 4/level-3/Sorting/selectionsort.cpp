#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){

        for (int i = 0; i < n-1; i++)
        {
            int minindex =i;
            for (int j = i+1; j < n; j++)
            {
                if (arr[j]<arr[minindex])
                {
                    minindex=j;
                }
                
            }

            swap(arr[i],arr[minindex]);
            
        }
        
}


int main(){
    int arr[]={9,5,7,6,6,2,1,6};
    int n=8;

    selectionsort(arr,n);


    //print array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}