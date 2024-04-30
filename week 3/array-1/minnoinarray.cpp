#include <iostream>
using namespace std;

int main(){
    int arr[10]={10,50,5,9,820,80,7,0,78,9};
    int size=10;
    int min=arr[0];
    int index =0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<= min)
        {
            min=arr[i];
            index=i;
        }
        
    }
    

    cout<<"the minimum no. in this array is "<<min << " at the index "<<index;
}