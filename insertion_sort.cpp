#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<< " ";
    }

    cout<<endl;
}

int main()
{
    cout<<"insertion sort"<<endl;


    int arry1[]= {122,13,1,2,34,32,5,44};
    int size = sizeof(arry1)/sizeof(arry1[0]);

    printArray(arry1,size);

    for (int k = 2; k<size; k++)
    {
        int temp = arry1[k];
        int j = k - 1;
        while(j>=0 && temp <= arry1[j] )
        {
            arry1[j+1] = arry1[j];
            j = j-1;
        }

        arry1[j+1] = temp;
    }

    cout<<"after sort"<<endl;
    printArray(arry1,size);
    return 0;
}