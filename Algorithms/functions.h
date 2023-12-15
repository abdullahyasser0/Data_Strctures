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
void changeLoc(int arr[], int now, int after){
    int temp=arr[now];   
    for (now ;now>after;now--){
        arr[now]=arr[now-1];
    }
    arr[after]=temp;
}