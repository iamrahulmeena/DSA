#include <iostream>
#include <string.h>
using namespace std;
void checkPalindrome(char arr[]){
        int first=0;
        int end=strlen(arr)-1;
        bool ans=false;
        
        while (first<end)
        {
            if (arr[first]==arr[end])
            {
               first++;
               end--;
               ans=true;
            }

            else{
                ans=false;
                break;
            }
            
        }
        
        if (ans==false)
        {
            cout<<"invalid palindrome"<<endl;
        }

        else{
            cout<<"valid palindrome";
        }
        
        
        
}


int main(){
    char arr[100];
    cin.getline(arr,100);

    checkPalindrome(arr);
}