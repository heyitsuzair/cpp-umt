#include <iostream>
using namespace std;

/**
 * @calcAvg
 *
 * Used to calculate the average of 3 numbers
 *
 * console the output
 */
int calcAvg(int a, int b, int c)
{
    cout << "Your average marks are = " << (float)(a + b + c) / 3 << endl;

    return 0;
}

int main()
{
    int a, b, c;

    cout << "Enter 1st value = " << endl;
    cin >> a;
    cout << "Enter 2nd value = " << endl;
    cin >> b;
    cout << "Enter 3rd value = " << endl;
    cin >> c;

    calcAvg(a, b, c);

    /**
     * @system()
     *
     * A built in function of c++ that have some methods such as preventing screen from being auto closed
     */
    system("pause");

    return 0;
}
