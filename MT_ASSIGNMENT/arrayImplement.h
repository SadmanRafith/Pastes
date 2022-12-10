#include<iostream>
#include<algorithm>
using namespace std;


void print1DArray(int *array, int size)
{

    cout << "1D Array: ";
    for(int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void reversePrint1DArray(int *array, int size)
{

    cout << "Rev 1D Array: ";
    for(int i=size-1; i>=0; i--)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void input1DArray(int *array, int size)
{

    cout << "Input: ";
    for(int i=0; i<size; i++)
    {
        cin >> array[i];
    }
    cout << "\nThe array:";
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void searchIn1DArray(int *array, int size, int searchKey)
{
    int flag=0;
    for(int j=0; j<size; j++)
    {
        if(array[j]==searchKey)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "Element was found!";
    }
    else
    {
        cout << "Element was not found";
    }
    cout << endl;
}

void findMax1DArray(int *array, int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(array[j]>array[j+1])
            {                
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    cout << "\nMax element: " << array[size-1];
    cout << endl;
}

void findMin1DArray(int *array, int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(array[j]>array[j+1])
            {                
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    cout << "\nMin element: " << array[0];
    cout << endl;
}

void copy1DArray(int *sourceArray, int *destinationArray, int size)
{
    for(int i=0; i<size; i++)
    {
        destinationArray[i]=sourceArray[i];
    }
    cout << "\nCopy array: ";
    for(int i=0; i<size; i++)
    {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

}


