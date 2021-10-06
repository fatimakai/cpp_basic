#include <iostream>
using namespace std;

void printArray(int arry[], int size)
{
    for (int i=0;i<size;i++)
    {
        cout<< arry[i]<< " ";
    }
    cout<<endl;
}

int findSmallestnumber(int arry[], int i, int size)
{
    int ele_small, position, j;
    ele_small = arry[i];
    position = i;
    for (j=i+1;j<size;j++)
    {
        if (arry[j]<ele_small)
        {
            ele_small= arry[j];
            position = j;
        }
    }
    return position;
}

int main()
{
    int array[]= {432,42,4,34,67,88,36,46,332,1,23,45,11,36,22,13};
    int size = sizeof(array)/sizeof(array[0]);
    int location = 0;
    int temp;
    printArray(array, size);
    // location = findSmallestnumber(array, 10, size);
    // cout<<"location :"<<location<<endl;
    for (int i =0; i<size;i++)
    {
        location = findSmallestnumber(array,i,size);
        printArray(array, size);
        cout<< "swap: "<< array[i]<< "<----->"<<array[location]<<endl;
        temp = array[i];
        array[i]= array[location];
        array[location]= temp;
    }
    cout<< "selection sort"<<endl;
    printArray(array, size);
    return 0;
}