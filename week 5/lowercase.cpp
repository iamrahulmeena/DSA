#include <iostream>
#include<string.h>
using namespace std;

int main(){
    char arr[100];
    cin.getline(arr,100);
    int size=strlen(arr);

    //using predefine function

    // for (int i = 0; i < size; i++)
    // {
    //     arr[i]=tolower(arr[i]);
    // }
    
    //using self logic
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>='A' && arr[i]<= 'Z')
        {
            arr[i]=arr[i] +'a'-'A';
        }
        
    }
    cout<<arr;
    
}