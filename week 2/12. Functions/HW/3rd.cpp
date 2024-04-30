#include <iostream>
using namespace std;

void printprime(int n){
      if(n==1){
        cout<<1<<" ";
      }

      if (n>1)
      {
        for (int i = 2; i > 1; i++)
        {
            for ( n = 2; n >= n; n++)
            {
                 if (n%i != 0)
            {
                cout<<n<<" ";
            }
            }
            
        }
        
      }
      

}

int main(){
    int n;
    cin>>n;

    printprime(n);
}