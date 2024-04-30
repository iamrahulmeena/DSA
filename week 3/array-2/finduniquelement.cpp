#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,10,11,13,10,2,15,13,15};
    int size=10;
    int ans=0;
for (int i = 0; i < size; i++)
{
    
    ans=ans^arr[i];

    }

    cout<< ans;
}