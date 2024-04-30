//prime or not 

#include<iostream>
using namespace std;

void checkprime(int n){
    bool ans = false;
    for (int i = 2; i < n; i++)
    {   
        if (n%i == 0)
        {
            ans = true;
            
        }
        
    }

    if (ans==true)
    {   
        cout<<"not prime";
    }
    
    else{
        cout<<"prime";
    }
    

}

int main(){
    int n;
    cin>>n;
checkprime(n);
}