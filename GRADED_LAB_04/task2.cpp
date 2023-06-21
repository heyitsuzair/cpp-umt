#include <iostream>
using namespace std;
int main()
{
    int arr[10], sum = 0, product = 1;

    // Take Input
    cout << "Enter Values:";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < 10; j++)
    {
        sum += arr[j];
        product *= arr[j];
    }
    cout << "Sum:" << sum << endl;
    cout << "Product:" << product << endl;

    system("pause");
    return 0;
}