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

    cout << "Even Indexes Value:" << endl;
    for (int j = 0; j < 10; j++)
    {
        if (j % 2 == 0)
        {
            cout << arr[j] << endl;
        }
    }

    system("pause");
    return 0;
}