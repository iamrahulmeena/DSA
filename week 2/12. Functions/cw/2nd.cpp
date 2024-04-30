//counting from 1 to N
#include <iostream>
using namespace std;

void countingN(int n){
   for (int i = 1; i <= n; i++)
   {
    cout<<i<<" ";
   }
   
}

int main(){
    int n;
    cin>>n;
countingN(n);

}