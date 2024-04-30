//sum of all even no. upto N

#include<iostream>
using namespace std;

void sumevenupton(int n){
    int sum=0;
    for (int i = 0; i < n+1; i++)
    {
    
     if (i%2 == 0)
     {
      sum = sum+i;
     }
   
    }

    cout<<sum;
}

int main(){
    int n;
    cin>>n;

    sumevenupton(n);
}