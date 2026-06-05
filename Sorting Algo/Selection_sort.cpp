# include <iostream>
# include <vector>
using namespace std ;

// Selection sort
void selectionsort(int arr[], int n) // TC O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        int SI = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[SI])
            {
                SI = j;
            }
        }
        swap(arr[i], arr[SI]);
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
    selectionsort(arr,n);
    printarray(arr, n);
    return 0;
}
