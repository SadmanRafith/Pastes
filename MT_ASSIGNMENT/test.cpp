#include<iostream>
#include"arrayImplement.h"
using namespace std;

int main()
{

    int arr1size=5;
    int arr1[arr1size]={4,9,3,12,6};   

    int arr2size=10;
    int arr2[arr2size];
     
    int key1;
    cout << "Search key: ";
    cin >> key1;

    print1DArray(arr1, arr1size);
    reversePrint1DArray(arr1, arr1size);
    searchIn1DArray(arr1, arr1size, key1);
    findMax1DArray(arr1, arr1size);
    findMin1DArray(arr1, arr1size);
    copy1DArray(arr1, arr2, arr1size);
    input1DArray(arr1, arr1size);

    return 0;
}