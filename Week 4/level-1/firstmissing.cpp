#include <iostream>
#include <vector>
using namespace std;

void findMissing(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;

    if (arr[end] != end+2)
    {
        ans=end+2;
        cout<<ans<<endl;
        return;
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

    cout<<ans+1<<endl;
}

int main() {
    vector<int> arr = {1,2,4,5,6,7,8};
    findMissing(arr); 
    return 0;
}