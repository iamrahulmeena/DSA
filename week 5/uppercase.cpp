#include<iostream>
#include <string.h>
using namespace std;

int main(){
    char arr[100];
    cin.getline(arr,100);

    int size=strlen(arr);
    //predefine function
    // for (int i = 0; i < size; i++)
    // {
    //     arr[i]=toupper(arr[i]);
    // }
    
    // cout<<arr;


    //using self logic
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>='a' && arr[i]<='z')
        {
            arr[i]=arr[i] -'a'+'A';
        }
        
    }

    cout<<arr;
    
}