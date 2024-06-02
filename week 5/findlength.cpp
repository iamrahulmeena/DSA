#include <iostream>
#include<string.h>
using namespace std;

//lengthcalculation using for loop
int lengthcalculation1(char arr[],int size){
int count=0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i]=='\0')
            {
                break;
            }

            else{
                count++;
            }
            
        }
        return count;
        
}

int lengthcalculation2(char arr[]){
    int i=0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(){
    char arr[100];
    cin.getline(arr,100);

    //length calculation using pre define function -> string.h headerfile required
    cout<<"length calculation using pre define function is "<<strlen(arr)<<endl;

    //creation own function
    int len =lengthcalculation1(arr,100);
    cout<<"length calculation using for loop is "<<len<<endl;

    //H.W(using while loop)
    int len2 = lengthcalculation2(arr);
    cout<<"length calculation using while loop is "<<len2<<endl;
}