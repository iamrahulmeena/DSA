#include <iostream>
using namespace std;

int main(){
    int n=5;
    int &k =n;
    int &r =k;


    cout<<n<<endl;
    cout<<k<<endl;
    cout<<r<<endl;


cout<<endl; cout<<endl; cout<<endl;
    n++;
    cout<<n<<endl;
    cout<<k<<endl;
    cout<<r<<endl;
}