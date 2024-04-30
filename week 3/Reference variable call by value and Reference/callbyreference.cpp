#include <iostream>
using namespace std;

void incrementn(int &n){
n++;

cout<<"n from function "<<n<<endl;
}

int main(){
    int n;
    cin>> n;

    incrementn(n);

    cout<<"n from main "<<n;
}