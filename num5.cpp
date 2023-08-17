#include<iostream>
using namespace std;
float average_of_height (int arr[], int heights)
{
    int sum = 0;
    for (int i =0; i < heights; i++)
    {
        sum += arr [i];
    }
    return (float)sum/ heights;
}
int main()
{
    int arr [] = {80, 52, 43, 258, 45, 62, 99};
    float avg_height = sizeof (arr)/ sizeof (arr[0]);
    cout << "The average height of the trees are :" << average_of_height (arr, avg_height) << endl;
    return 0;
}