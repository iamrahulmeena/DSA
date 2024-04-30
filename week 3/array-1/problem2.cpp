//1. create arrayb 5 size
// taki i/p
//print sum of all elements

#include<iostream>
using namespace std;

int main(){
    int arr[5];

    int n=sizeof(arr)/4;
//taking input
    for (int i = 0; i < n; i++)
    {
        cout<<"enter value for index "<<i<<endl;
        cin>>arr[i];
    }
    
//calculate sum
int sum=0;
for (int i = 0; i < n; i++)
{
   sum=sum+arr[i];
}

cout<<"sum of this array is "<<sum;
    
}