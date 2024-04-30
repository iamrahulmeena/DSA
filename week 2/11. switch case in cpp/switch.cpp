#include <iostream>
using namespace std;

int main(){
int a,b;
cout<<"enter a and b"<<endl;
cin>>a>>b;
int ans=0;
int op;
cout<<"what operation you want to do"<<endl;
cin>>op;

//op is 1-> +,2->-,3->*,4->/,else->invalid operation


switch (op)
{
case 1:
   ans=a+b;
    break;
case 2:
   ans=a-b;
    break; 

case 3:
    ans=a*b;
    break;       
case 4:
   ans=a/b;
    break;
default:
cout<<"invalid operation"<<endl;
    break;
}

cout<<"your answer is"<<ans<<endl;
return 0;

}