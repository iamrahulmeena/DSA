#include <iostream>
using namespace std;
void linearsearch(int arr[],int target,int size){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout<<i;
            return;
        }
    }
    cout << "Element not found" << endl;
}


int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target=80;
    int size=sizeof(arr)/4;

    linearsearch(arr,target,size);
}