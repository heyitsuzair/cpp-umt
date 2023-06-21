#include <iostream>
using namespace std;
int main()
{
    int arr[10];

    // Take Input
    cout << "Enter Values:";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing In Inverse:" << endl;
    for (int j = 9; j >= 0; j--)
    {
        cout << arr[j] << endl;
    }

    system("pause");
    return 0;
}