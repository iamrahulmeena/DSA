#include <iostream>
using namespace std;

int main(){
    int n = 3;
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i==0 || i==n)
            {
                cout<<"* ";
            }

            else
            {
                if (j==0 || j==5)
                {
                    cout<<"* ";
                }
                
                else{
                    cout<<"  ";
                }
            }
            
            
        }
        
        cout<<endl;
    }
    
}