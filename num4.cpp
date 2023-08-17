#include<iostream>
using namespace std;
int main()
{
    int arr [] = {45,95,50,20,22,14,17};
    int size = 7;
    cout << "The even numbers are :";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";

        }
    }
    return 0;

}