#include <iostream>
#include <vector>
using namespace std;

// Insertion sort
void insertionsort(int arr[], int n) // TC O(n^2)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i], prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}