#include <iostream>
#include <string.h>
using namespace std;

string replace(char arr[]){
    int size=strlen(arr);
     
    for (int i = 0; i < size; i++)
    {
        
        if (arr[i]== '@')
        {
           arr[i]=' ';
        }
        
    }
    
}


int main(){
    char arr[100];
    cin.getline(arr,100);

    replace(arr);

    cout<<arr;
}