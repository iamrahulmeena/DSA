#include <iostream>
using namespace std;

int main(){
    int arr[10]={10,80,90,70,45,65,83,19,66,94};
    int size=10;
    int left=0;
    int right=size-1;


    while (left<=right)
    {
       if (left==right)
       {
        cout<<arr[left]<<" ";
       }
       else{
        cout<<arr[left]<<" "<<arr[right]<<" ";
       }
       left++;
       right--;
    }
    
    

}