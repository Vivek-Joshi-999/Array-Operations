#include <iostream>
using namespace std;

void InsertAtend(int arr[], int capacity, int &size)
{

    int value;

    if (size >= capacity - 1)
    {
        cout << "\n Array Overflow!\n";
        return;
    }

    else if (size <= -1)
    {
        cout << "\nArray is Empty ! First add Any element\n";
        cout << "\nEnter First value: ";
        cin >> value;
        size++;
        arr[size] = value;
    }
    else
    {
        cout << "\nEnter value: ";
        cin >> value;
        size++;
        arr[size] = value;
    }
}
void display(int arr[], int size)
{

    if (size == -1)
    {
        cout << "\nArray is empty! ";
    }
    else
    {
        cout << "\n Array Elements: ";
        for (int i = 0; i <= size; i++)
        {
            cout << "  " << arr[i];
        }
    }
}

void insertAtbeginning(int arr[], int capacity, int &size)
{

    int value;
    if (size >= capacity - 1)
    {
        cout << "\n Array Overflow!\n";
        return;
    }
    else if (size == -1)
    {
        cout << "\nArray is Empty ! First add Any element\n";
        cout << "\nEnter First value: ";
        cin >> value;
        size++;
        arr[size] = value;
    }

    else
    {

        cout << "\nEnter value At begin: ";
        cin >> value;

        for (int i = size; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = value;
        size++;
    }
}

void insertAtpos(int arr[], int capacity, int &size)
{
    int value;

    if (size >= capacity - 1)
    {
        cout << "\n Array Overflow!\n";
        return;
    }

    else if (size == -1)
    {
        cout << "\nArray is Empty ! First add Any element\n";
        cout << "\nEnter First value: ";
        cin >> value;
        size++;
        arr[size] = value;
    }
    else
    {
        int pos;
        cout << "\nEnter Position to insert new element: ";
        cin >> pos;

        cout << "\nEnter value :";
        cin >> value;

        for (int i = size; i > pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = value;
        size++;
    }
}

void deleteAtEnd(int arr[], int &size)
{

    if (size == -1)
    {
        cout << "\nArray is empty! ";
        return;
    }
    cout << "Deleted value: " << arr[size];
    size--;
}

void deleteAtbegin(int arr[], int &size)
{

    if (size == -1)
    {
        cout << "\nArray is empty! ";
        return;
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;
}

void deletePos(int arr[], int &size)
{

    if (size == -1)
    {
        cout << "\nArray is empty! ";
        return;
    }

    else
    {
        int pos;
        cout << "\nEnter position of element which u want to delete: \n";
        cin >> pos;

        for (int i = pos; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
}

int BinarySeach(int arr[], int &size)
{

    int start = 0;
    int end = size - 1;
    int key;
    cout << "\nEnter value to search in array: ";
    cin >> key;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[10];
    int size = -1;
    int capacity = 10;

    int choice = 0;

    while (choice != 9)
    {

        cout << "\n\n1.Insert at End: \n2.Insert At Beginning: \n3.Insert At position: \n4.Delete from End  \n5.Delete form Begin:  \n6.Delete from posotion \n7.Display \n8.Searching-Using Binary Search \n9.Exit\n ";
        cout << "\nEnter Your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            InsertAtend(arr, capacity, size);
            break;

        case 2:
            insertAtbeginning(arr, capacity, size);
            break;

        case 3:
            insertAtpos(arr, capacity, size);
            break;

        case 4:
            deleteAtEnd(arr, size);
            break;

        case 5:
            deleteAtbegin(arr, size);
            break;

        case 6:
            deletePos(arr, size);
            break;

        case 7:
            display(arr, size);
            break;
        case 8:
        {
            int result = BinarySeach(arr, size);
            if (result != -1)
            {
                cout << "\nValue Find at index: " << result;
            }

            else
            {
                cout << "\nValue not found!";
            }

            break;
        }
        case 9:
            exit(0);
            break;

        default:
            cout << "\nInvalid choice !";
            break;
        }
    }
}
