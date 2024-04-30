#include<iostream>
using namespace std;

void areaofcrical(float r){
 float A;
 A=3.14*(r*r);

 cout<<A;
}

int main(){
    float r;
    cin>>r;

    areaofcrical(r);
}