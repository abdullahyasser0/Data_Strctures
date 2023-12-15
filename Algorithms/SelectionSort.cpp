#include <iostream>
#include "functions.h"
using namespace std;

//Selection sort swaps the current with the minimum of the list so it sort the list on itelating on the list 



void selectionSort(int arr[], int len){
    int min, Cindex, compare =0;


    for (Cindex=0; Cindex<len-1; Cindex++) {
        min=Cindex;
        for (compare = Cindex+1; compare<len ; compare++){
            if (arr[compare]<arr[min])
            {
                min=compare;
            } 
        }
        if (min != Cindex)
            swap(arr[min], arr[Cindex]);
    }
}


int main(){
    int arr[5]={3,5,1,4,2};

    selectionSort(arr , 5);

    printArray(arr,5);
    return 0;
}