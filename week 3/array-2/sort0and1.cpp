#include <iostream>
using namespace std;

int main(){
    int arr[10]={0,1,1,1,0,1,0,1,1,0};
    int size=10;

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            while (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
        }
        
    }

  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  
    
}