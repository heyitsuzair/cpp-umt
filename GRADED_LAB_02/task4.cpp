#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0;

    cout << "Enter the number:";
    cin >> x;

    if (x > 9999 || x < 0)
    {
        cout << "Invalid Input. Number can't exceed 9999 Or Cannot be less than 0" << endl;
    }
    else
    {
        for (int i = 0; i <= 9999; i++)
        {
            sum += x % 10;
            x /= 10;
        }

        if (sum % 2 == 0)
        {
            cout << "Sum is " << sum << " and it is an even number" << endl;
        }
        else
        {

            cout << "Sum is " << sum << " and it is an odd number" << endl;
        }
    }

    system("pause");

    return 0;
}
