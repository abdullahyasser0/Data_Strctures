#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

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

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}


int main(){
    int arr[5]={3,5,1,4,2};

    selectionSort(arr , 5);

    printArray(arr,5);
    return 0;
}