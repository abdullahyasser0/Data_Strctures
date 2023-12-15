#include <iostream>
#include "functions.h"
using namespace std;

/*
insertion sort make a virtual list of the first element 
then add to it the next element to its correct position in the list to be sorted
*/



void selectionSort(int arr[], int size){

    for (int i =0;i<size;i++){
        int current =i;
        while(arr[current]<arr[current-1]&&current>0) {
            swap(arr[current],arr[current-1]);
            current--;
        }
    }
}


int main(){
    int A[5]={5,4,3,2,1};

    selectionSort(A,5);
    printArray(A,5);


    return 0;
}