#include"functions.h"
/*
insertion sort make a virtual list of the first element 
then add to it the next element to its correct position in the list to be sorted
*/

void insertionSort(int arr[], int size){

    for (int i =1;i<size;i++){
        int back =i-1;
        while(arr[back]>arr[i]&&back>0) {
            back--;
        }
        changeLoc(arr,i,back);
    }
}


int main(){
    int A[5]={5,4,3,2,1};

    insertionSort(A,5);
    printArray(A,5);


    return 0;
}