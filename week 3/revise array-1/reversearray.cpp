#include <iostream>
using namespace std;

int main(){
   int arr[10]={5,6,0,4,5,6,6,4,6,46};
   int size =sizeof(arr)/4;


   int left =0;
   int right =size-1;

   while (left<=right)
   {
     int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
   }


   for (int i = 0; i < size; i++)
   {
        cout<<arr[i]<<" ";
   }
}