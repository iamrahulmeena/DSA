//sum of all no. upto n

#include <iostream>
using namespace std;

void sumupton(int n){
    int sum=0;
 for (int i = 0; i < n+1; i++)
 {
    sum = sum+i;
 }

 cout<<sum;
 
}

int main(){
    int n;
    cin>>n;
    sumupton(n);
}