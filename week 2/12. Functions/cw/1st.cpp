//find max of 3 no.
#include <iostream>
using namespace std;

void findmax(int A,int B,int C){
    if (A>B)
    {
        if (A>C)
        {
            cout<<A;
        }
        
        else{
            cout<<C;
        }
    }

   else if (B>A)
    {
        if (B>C)
        {
            cout<<B;
        }
        
        else{
            cout<<C;
        }

    }

    else{
            cout<<C;
        }
    
}

int main(){
    int A,B,C;
    cin>>A>>B>>C;

    findmax(A,B,C);

}