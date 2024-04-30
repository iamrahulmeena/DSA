#include <iostream>
#include <array>

using namespace std;
int main(){
    array<int,10> arr ={};
    int size =arr.size();


    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }


    cout<<"element at index 2 in array "<<arr.at(2)<<endl;

    //check array is empty or not
    cout<<"array is empty "<<arr.empty()<<endl;

    //first element
    cout<<"first element "<<arr.front()<<endl;

    //last element
    cout<<"last element "<<arr.back()<<endl;






    
    
}