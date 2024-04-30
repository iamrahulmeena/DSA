#include<iostream>
using namespace std;
void countinarray(int arr[],int size){
    int zerocount =0;
    int onecount =0;

    for (int i = 0; i < size; i++)
    {
       if (arr[i]==0)
       {
        zerocount=zerocount+1;
       }

       else if (arr[i]==1)
       {
        onecount=onecount+1;
       }
       
       
    }
    
cout<<"the total no. of 0's in array is " <<zerocount <<" and no. of 0's is " <<onecount;
}

int main(){
    int arr[10]={0,1,1,5,6,0,1,1,1,0};
    int size=sizeof(arr)/4;

    countinarray(arr,size);
}