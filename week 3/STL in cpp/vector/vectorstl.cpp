#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;

    arr.push_back(1);
    cout<<"capacity "<<arr.capacity()<<endl;
    cout<<"size "<<arr.size()<<endl;

    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(8);
    arr.push_back(10);
    arr.push_back(19);

    //element at index 4;
    cout<<"element at index 4 is "<<arr.at(4)<<endl;


    //first and last element
   cout<< arr.front()<<endl;
   cout<< arr.back()<<endl;

//remove 1 element
   arr.pop_back();
//first and last element
   cout<< arr.front()<<endl;
   cout<< arr.back()<<endl;





// //size and capacity before clear
// cout<<"capacity "<<arr.capacity()<<endl;
//     cout<<"size "<<arr.size()<<endl;

// //clear array
// arr.clear();


// //size and capacity after clear array
// cout<<"capacity "<<arr.capacity()<<endl;
//     cout<<"size "<<arr.size()<<endl;


//copy array in an another array
vector<int>last(arr);

for (int i:last)
{
    cout<<i<<" ";
}


}
