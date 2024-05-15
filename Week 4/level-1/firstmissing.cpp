#include <iostream>
using namespace std;

void findmissing(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    if (arr[end] != end+1)
    {
        ans=end;
    }
    
    while (start<=end)
    {
        int mid = start + (end - start) / 2;
        int diff = arr[mid]-mid;
        
        if (diff == 1) {
            start = mid + 1;
        } 
        else {
            ans = mid;
            end = mid - 1;
        }
        
    }

    std::cout<<ans+1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=9;

    findmissing(arr,size);
    return 0;
}