#include<iostream>
using namespace std;


void linearsearch(int arr[],int size){
 int target=8;
 bool result =0;
 int index=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            result = 1;
            index=i;
            break;
        }     
    }
    
if (result==1)
{
    cout<<"target found at index "<<index;
}

else{
    cout<<"target not found";
}

                                
}


int main(){
 int arr[5]={2,4,6,8,10};
 int size=5;

linearsearch(arr,size);


{
    /* code */
}

}