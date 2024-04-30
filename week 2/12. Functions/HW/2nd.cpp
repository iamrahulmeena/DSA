#include <iostream>
using namespace std;

void factorial(int n){
    int ans =n;
    for (int i = n-1; i > 0; i--)
    {
        ans=ans*i;
    }

    cout<<ans;
    
}

int main(){
    int n;
    cin >>n;

    factorial(n);
}