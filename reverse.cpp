#include <iostream>
using namespace std;

void reveseArray(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    int temp;

    while (start <= end)
    {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    reveseArray(arr, size);
    cout << "\nReverse Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}