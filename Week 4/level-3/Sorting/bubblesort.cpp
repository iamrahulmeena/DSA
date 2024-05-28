#include <iostream>
using namespace std;

void Bubblesort(int arr[],int n){
        for (int i = 0; i < n-1; i++)
        {
            bool swaped=false;
            for (int j = 0; j < n-i-1; j++)
            {
                if (arr[j]>arr[j+1])
                {
                   swap(arr[j],arr[j+1]);
                   swaped=true;
                }  
            }

            if (swaped==false)
            {
                break;
            }
             
        }
        
       
}

int main(){
    int arr[]={9,5,7,6,6,2,1,6};
    int n=8;
    Bubblesort(arr,n);

    //print array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}