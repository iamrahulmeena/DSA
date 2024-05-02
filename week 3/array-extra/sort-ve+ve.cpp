#include <iostream>
using namespace std;

int main(){
    int arr[7]={23,-7,12,-10,-11,40,60};

    int index=0;
    int indexy=0;

    for (int i = 0; i < 7; i++)
    {
       if(arr[i]<0){
        swap(arr[index],arr[indexy]);
        index++;
        indexy++;
       }

       else{
        index++;
       }

        
    }
    


    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}