#include <iostream>
using namespace std;

int main(){
   int arr[10]={};
   int size =sizeof(arr)/4;

   for (int i = 0; i < size; i++)
   {
      cin>>arr[i];
   }
   

   //priniting 

for (int i = 0; i < size; i++)
   {
      cout<<arr[i]<<" ";
   }


cout<<endl;

   //double

for (int i = 0; i < size; i++)
   {
      arr[i]=arr[i]*2;
   }


   //print double


   for (int i = 0; i < size; i++)
   {
      cout<<arr[i]<<" ";
   }

}