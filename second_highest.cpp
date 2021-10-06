#include <iostream>
using namespace std;

int main(){
    int array[] = {12,335,2,3,32,5,936,34};
    int size = sizeof(array)/sizeof(array[0]);
    int greater ;
    greater = array[0];
    for(int i=0;i<size;i++)
    {   
        cout<<"i:"<<i<<endl;
        cout<< "value: "<<array[i]<<endl;
        if (greater>array[i])
        {
            greater= array[i];
        }
    }
    cout<< "smaller number:"<<greater<<endl;
    return 0;
}