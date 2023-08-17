#include<bits/stdc++.h>
using namespace std;
int temperature (int arr[], int num)
{
    int i;
    int highest_temperature = arr[0];
    for (i = 1; i < num; i++)
    {
        if (arr[i] > highest_temperature)
            highest_temperature = arr[i];
    }
    return highest_temperature;
}
int main()
{
    int experiment_temperature[] = { 84, 106, 67, 110, 121,49};
    int num = sizeof (experiment_temperature)/ sizeof (experiment_temperature[0]);
    cout << " highest temperature among the all temperature is: " << temperature (experiment_temperature, num);
    return 0;
    

}