// #include<iostream>
// using namespace std;

// void selectionSort(int *arr, int n){

//    for(int i = 0; i<n-1; i++){
//     int minIdx = i;
//     for(int j = i+1; j<n; j++){
//         if(arr[j]<arr[minIdx]){
//             minIdx = j;
//         }
//         swap(arr[i], arr[minIdx]);
//     }
//    }
// }

// void printArr(int *arr, int n){
//     for(int i =0; i<n; i++){
//         cout<<arr[i]<<", ";
//     }
// }

// int main(){
//     int arr[5] = {1,7,2,5,3};
//     selectionSort(arr, 5);
//     printArr(arr,5);

//     return 0;
// }


// ------------------------------------------------------------


#include<iostream>
using namespace std;


void selectionSort(int *arr, int n){

    for(int i = 0; i<n-1; i++){
        int minVal =i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minVal]){
                minVal = j;
            }
        }
        swap(arr[i], arr[minVal]);
    }
}

void printArr(int *arr, int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}

int main(){
    int arr[] = {1,7,2,5,3};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr, n);
    printArr(arr, n);
    return 0;
}