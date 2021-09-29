#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubble_sort(int arr[], int size){
    for (int i=0; i<size-1; i++){
        for (int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main()
{

    cout<<"Bubble sort"<<endl;
    int arr[]= {1,23,54,2,3,56,6,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, size);
    printArray(arr, size);
    return 0;
}