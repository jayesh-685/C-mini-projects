#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int *apply_all(int arr1[], int size1, int arr2[], int size2);
void print(int arr[], int size);

int main()
{
    int arr1 [] {1, 2, 3, 4, 5};
    int arr2 [] {10, 20, 30};

    cout << "Array 1: ";
    print(arr1, 5);
    cout << endl;

    cout << "Array 2: ";
    print(arr2, 3);
    cout << endl;

    int *pFinal = apply_all(arr1, 5, arr2, 3);
    cout << "Final Array: ";
    print(pFinal, 15);
    cout << endl;

    delete [] pFinal;

    return 0;
}

int *apply_all(int arr1[], int size1, int arr2[], int size2)
{
    int *result {nullptr};
    int size = size1 * size2;
    int position = 0;

    result = new int [size];

    for (size_t i=0; i<size2; i++) {
        for (size_t j=0; j<size1; j++) {
            result[position] = arr2[i] * arr1[j];
            position++;
        }
    }

    return result;
}

void print(int* const arr, int size)
{
    cout << "[ ";
    for(size_t i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}
