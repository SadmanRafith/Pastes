/*
    1. Given an array where all its elements are sorted in increasing 
    order except two swapped elements, sort it in linear time. Assume 
    there are no duplicates in the array.

    For example,

    Input:  a[] = [3, 8, 6, 7, 5, 10]
    Output: 3, 5, 6, 7, 8, 10
*/


#include<iostream>
#include<algorithm>
using namespace std;

void sortByLinearTime(int arr[], int n){
    for (int i = n-1; i > 0; i--){
        if (arr[i] < arr[i-1]){
            int j = i-1;
            while (j>=0 && arr[i] < arr[j]){ 
                j--;
            }
            swap(arr[i], arr[j+1]);
            break;
        }
    }
}
int main()
{
    cout << "\n";
    int arr[] = {3,8,6,7,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << "Primary Array is              : ";
    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    sortByLinearTime(arr, n);
 
    cout << "Sorted By Linear Time Array is: ";
    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "\n";

    return 0;
}
