#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j < 7-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}