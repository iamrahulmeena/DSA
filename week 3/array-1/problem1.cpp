//1. create a 10 size array
//2. take i/p in that array
//3. double up each value of that array

#include<iostream>
using namespace std;

int main(){
    int arr[10];

    int n=10;
//taking input
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the value of index "<< i<<endl;
        cin>>arr[i];
    }
    
//printing for conformation
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

   cout<<endl; 
//double
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i]*2;
    }
    

    //printing again
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}