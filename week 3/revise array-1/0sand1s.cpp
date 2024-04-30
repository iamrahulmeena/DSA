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

  int count0 =0;
  int count1=0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i]==0)
    {
        count0++;
    }

    else if (arr[i]==1)
    {
       count1++;
    }
    
  }
  
  cout<<"no. of 0s is "<<count0 <<" and no. of 1s is "<<count1;

}