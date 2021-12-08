#include <iostream>
using namespace std;

//  Global variable
int stack[100], size = 100, postion = -1;

void push(int val)
{
    if (postion >= size - 1)
    {
        cout << "stack full" << endl;
    }
    else
    {
        postion++;
        stack[postion] = val;
    }
}

void print_arr(){
    if(postion>=0){
        cout<<"stack elements are: ";
        for(int i=postion;i>=0;i--)
        {
            cout<<stack[i]<< " ";
            cout<<endl;
        }
    }
}

void pop(){
    if (postion >=0){
        cout<<"stack underflow"<<endl;
    }
    else{
        cout<<"pop value"<<stack[postion] <<endl;
    }
}

int main()
{
    push(2);
    push(22);
    push(25);
    push(22);
    push(32);
    print_arr();

    return 0;
}