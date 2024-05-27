#include <iostream>
using namespace std;

int integerSqrt(int x){
    int start =0;
    int end =x;
    int ans=-1;

    if (x==0)
    {
        ans=0;
        return ans;
    }
    
    while(start<=end){
        int mid =start+(end-start)/2;

        if (mid==x/mid)
        {
            ans=mid;
            return ans;
        }
        

        else if(mid>x/mid){
            end=mid-1;
        }

        else{
            ans=mid;
            start=mid+1;
        }
    }

    //
    
    return ans;
}

long double sqrtFloat(int x, int precision) {
    int intPart = integerSqrt(x);
    long double newAns = (long double)intPart;
    long double increment = 0.1;

    for (int i = 0; i < precision; ++i) {
        while (newAns * newAns <= x) {
            newAns += increment;
        }
        newAns -= increment;
        increment /= 10;
    }

    return newAns;
}




int main(){
    int x=0;
    int number=0;
    cout<<"enter the no."<<endl;
    cin>>x;
    cout<<"Enter the number how many digits after decimal you want in answerrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr"<<endl;
    cin>>number;

    long double answer= sqrtFloat(x,number);
    cout<<answer;
}