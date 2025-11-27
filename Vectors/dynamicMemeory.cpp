#include <iostream>
using namespace std;

void functInt(){
    int *ptr = new int; //creating memory in heap , and *ptr variable created in stack which is pointed to that heap memory
    *ptr = 5;

    cout<<*ptr<<endl;
    delete ptr;         //delete the memory from the heap and remains only ptr and when we returns , it will also get deleted automatically coz it is present in the stack 
}

void func()
{
    // dynamic memory allocation
    int size;
    cout << "Enter the size of the array:";
    cin >> size;

    int *ptr = new int[size];

    int x = 1;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }

    delete[] ptr;       //free the dyamic memory (heap memory)
};

int main()
{
    // static memory allocation
    // int arr[100] = {1,2,3,4,5};

    return 0;
}