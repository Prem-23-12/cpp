#include <iostream>
#include <vector>
using namespace std;

// Bubble sort
void bubblesort(int arr[], int n) // TC O(n^2)
{
    for (int i = 0; i <= n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            return;
        }
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


int main(){
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    bubblesort(arr,n);
    printarray(arr, n);
    return 0;
}