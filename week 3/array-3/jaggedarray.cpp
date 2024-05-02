#include <Iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>>arr;

    vector<int>vec1(4,6);
    vector<int>vec2(9,8);
    vector<int>vec3(2,0);
    vector<int>vec4(5,1);
    vector<int>vec5(7,3);


    arr.push_back(vec1);
    arr.push_back(vec2);
    arr.push_back(vec3);
    arr.push_back(vec4);
    arr.push_back(vec5);



    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}