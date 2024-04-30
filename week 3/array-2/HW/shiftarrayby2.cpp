#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    int tempa = arr[size - 1];
    int tempb = arr[size - 2];

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 2];
    }

    arr[0] = tempb;
    arr[1] = tempa;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
