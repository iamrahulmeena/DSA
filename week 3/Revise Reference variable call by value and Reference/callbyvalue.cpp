#include <iostream>
using namespace std;

void inc(int n){
    n++;
    cout<<n<<endl;
}

int main(){
    int n=5;
    inc(n);
    cout<<n;
}