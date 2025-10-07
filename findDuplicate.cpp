#include <iostream>
#include <algorithm>
using namespace std;

bool containsDuplicate(int arr[], int size)
{
    sort(arr, arr + size);
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
            return true;
    }
    return false;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 1, 10, 3, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool result=containsDuplicate(arr,size);
    cout<<result;
    
    return 0;
}
