#include<iostream>
using namespace std;

int main(){
    int arr[10]={5,60,902,60,97,64,47,36,12,80};
    int size=10;
    int left =0;
    int right=size-1;

    while (left<=right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}