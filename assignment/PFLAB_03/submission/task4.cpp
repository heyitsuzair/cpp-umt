#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number = " << endl;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    /**
     * @system()
     *
     * A built in function of c++ that have some methods such as preventing screen from being auto closed
     */
    system("pause");

    return 0;
}
