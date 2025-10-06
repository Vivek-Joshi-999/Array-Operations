#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 1, 10, 3, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int lastnonZero = 0;
    cout << "\nOrignal array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[lastnonZero] = arr[i];
            lastnonZero++;
        }
    }

    while (lastnonZero < size)
    {
        arr[lastnonZero] = 0;
        lastnonZero++;
    }
    cout << "\nAfter moving zero: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}