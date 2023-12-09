#include <iostream>
using namespace std;

template<typename T>
int BinarySearch(T Arr[], int L , int R, T value){
    int len = L-R+1;
    int mid = (L+R)/2;
    if (Arr[mid] == value) return mid;
    if(len<=1){
         if (value<Arr[mid]){
            return BinarySearch(Arr , L, mid-1,value);
        }

            else if (value>Arr[mid]){
            return BinarySearch(Arr , mid+1, R,value);
        }
    }

return -1;
}

int main(){

int arr[6]={1,2,3,4,5,6};

cout<<BinarySearch (arr,0,5,6);
    return 0;

}