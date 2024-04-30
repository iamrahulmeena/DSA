#include <iostream>
using namespace std;

int main (){
    int arr[] = {2, 8, 1, 6, 7, 9, 5, 4};
    int targetsum = 14;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == targetsum) {
                cout << "The two pairs are " << arr[i] << " and " << arr[j] << endl;
            }
        }
    }

    return 0;
}
