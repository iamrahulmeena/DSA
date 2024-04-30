#include <iostream>
using namespace std;

int main(){
   int arr[10]={5,6,0,4,5,6,6,4,6,46};
   int size =sizeof(arr)/4;

   int min=arr[0];
   int index=0;

   for (int i = 0; i < size; i++)
   {
     if (arr[i]<min)
     {
        min=arr[i];
        index=i;
     }
     
   }

   cout<<"minimum no. is "<<min<<" at index "<<index;
   
}