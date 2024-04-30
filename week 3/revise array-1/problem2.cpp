#include <iostream>
using namespace std;

int main(){
   int arr[5]={};
   int size =sizeof(arr)/4;

   for (int i = 0; i < size; i++)
   {
      cin>>arr[i];
   }
   

  cout<<endl;

  int sum=0;

  for (int i = 0; i < size; i++)
  {
    sum=sum+arr[i];
  }

  cout<<sum;
  

}