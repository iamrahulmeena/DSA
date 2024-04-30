//swap 2 no.

#include <iostream>
using namespace std;

void swapab(int& a, int& b){
int temp = a;
 a = b;
 b = temp;


}

int main(){
int a,b;
cin>>a>>b;
swapab(a,b);
cout<<a<<" "<<b;
return 0;
}