#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int lenghtofstring(char arr[]){
    int i=0;
    while(arr[i]!='\0'){
        i++;

    }
}

void reverse(char arr[]){
    int start=0;
    int last=lenghtofstring(arr);

    while (start<last)
    {
        swap(arr[start],arr[last]);
        start++;
        last--;
    }
    
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    int len = strlen(arr);
    //reverse the input useing pre define function
    reverse(arr, arr + len);
    cout<<arr<<endl;

    //using own logic
    reverse(arr);
    cout<<arr;

}