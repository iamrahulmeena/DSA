//check prime no. or not

#include <iostream>
using namespace std;

void checkprime(int n){
    bool isprime=true;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {   
            isprime=false;
            cout<<"not prime ";
            break;
        }
            
    }

    if(isprime==true){
        cout<<"prime";
    }
    

}


bool checkprimebool(int n){
    
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {   
           return false;
            
        }
            
    }

    return true;

}

int main(){
    int n;
    cin>>n;

checkprime(n);


if(checkprimebool(n)){
    cout<<"prime number"<<endl;
}
else{
    cout<<"not ptime"<<endl;
}

}