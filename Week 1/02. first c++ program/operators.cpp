#include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=10;

    // arithmetic oprators
    cout<< (a+b) <<endl;
    cout<< (a-b) <<endl;
    cout<< (a*b) <<endl;
    cout<< (a/b) <<endl;
    cout<< (a%b) <<endl;

    cout<< endl;
    cout<< endl;
    cout<< endl;
    cout<< endl;
    
    //relational oprators
    cout<< (a>b) <<endl;
    cout<< (a<b) <<endl;
    cout<< (a<=b) <<endl;
    cout<< (a>=b) <<endl;
    cout<< (a%b) <<endl;
    cout<< (a!=b) <<endl;
    cout<< (a==b) <<endl;

    cout<< endl;
    cout<< endl;
    cout<< endl;
    cout<< endl;

   // assignment operators
   int C = a;
   cout<<C<<endl;

   cout<< endl;
    cout<< endl; 

// logical operators

    int age=20;
    int car=5;


if (age>=18 && car>= 1)
{
    cout<<"licence toh mil jayega bas chlana sikh ke aa";
}

    cout<< endl;
    cout<< endl;


if (age>=18 || car>= 20)
{
    cout<<"licence toh mil jayega bas chlana sikh ke aa";
}

    cout<< endl;
    cout<< endl;


cout<<!(a>b);
}