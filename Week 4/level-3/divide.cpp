#include <iostream>
using namespace std;
int binarysearch(int a,int b){
    int start=0;
    int end=a;
    int answer=-1;

    if (b==0)
    {
        cout<<"can't divide by 0"<<endl;
    }
    

    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if (mid ==a/b)
        {
            answer=mid;
            return answer;
        }

        else if(mid>a/b){
            end=mid-1;
        }

        else{
            answer=mid;
            start=mid+1;
        }
        
    }
    return answer;
    
}


int main(){
    int a=0;
    int b=0;
    cout<<"enter the number a"<<endl;
    cin>>a;
    cout<<"enter the number b"<<endl;
    cin>>b;

    int ans=0;

    if (a<0 && b>0)
    {
        ans=-binarysearch(-a,b);
    }
    else if(b<0 && a>0 ){
        ans=-binarysearch(a,-b);
    }
    else if(b=a<0 && b<0){
        ans=binarysearch(-a,-b);
    }
    else{
        ans=binarysearch(a,b);
    }
    
    cout<<ans;
}