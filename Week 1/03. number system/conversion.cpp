#include <iostream>
using namespace std;
int n;

int conversion(){
    while (n>0)
    {
        bool Bit = n%2;
        cout<<!Bit;
        n = n/2;
    }
    
}

int main(){
    
    cout<<"enter value of N \n";
    cin>> n;
    int output = conversion();
}