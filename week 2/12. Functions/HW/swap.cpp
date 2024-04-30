#include<iostream>
using namespace std;

void swap(int &a, int &b){
     int temp =a;
     a=b;
     b=temp;

     cout<< "A is" <<a<<"and B is "<<b;

}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
}