#pragma once
#include<iostream> 
using namespace std;
 

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}