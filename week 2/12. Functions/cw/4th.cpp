//check even or odd

#include <iostream>
using namespace std;

void checkevenodd(int n){
 if (n%2 == 0)
 {
    cout<<"even";
 }

 else{
    cout<<"odd";
 }

 
}

int main(){
    int n;
    cin>>n;
    checkevenodd(n);
}