#include "functions.h"

 /*
 BubbleSort works on relocationg the max element in the end of the array 
 O (N*N)
 */

void BubbleSort(int arr[],int size){
    for (int i=0; i<size-1; i++){
        for (int j=0;j<size-1-i ;j++){
            if (arr[j+1]<arr[j]) 
            swap(arr[j+1],arr[j]);
        }

    }

}

int main(){
    int A[5]={5,4,3,2,1};
    BubbleSort(A,5);
    printArray(A,5);


    return 0;
}