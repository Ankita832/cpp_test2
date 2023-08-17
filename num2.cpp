#include<iostream>
using namespace std;
int main()
{
    int score[] = {6, 5, 4, 2, 2, 1, 4, 3, 3};
    int total = 9, grand_total = 0;
    for (int i = 0; i < total; i++)
    {
        grand_total += score[i];
    }
    cout << "The grand total of James basket ball team is : " << grand_total;
    return 0;
}