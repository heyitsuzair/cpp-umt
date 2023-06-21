#include <iostream>
using namespace std;
int main()
{
    int arr[10], query, exists_at;
    bool is_found = false;

    // Take Input
    cout << "Enter Values:";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number you want to search:" << endl;
    cin >> query;

    for (int j = 0; j < 10; j++)
    {
        if (arr[j] == query)
        {
            is_found = true;
            exists_at = j;
        }
    }

    if (is_found)
    {
        cout << query << " Is present in the array at index " << exists_at << endl;
    }
    else
    {
        cout << "Sorry! We cannot find what you are looking for" << endl;
    }

    system("pause");
    return 0;
}