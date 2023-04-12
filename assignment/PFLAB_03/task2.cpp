#include <iostream>
using namespace std;

/**
 * @calcSum
 *
 * Used to calculate the sum of two numbers
 *
 * console the output
 */
int calcSum(int a, int b)
{
    cout << "Sum is = " << a + b << endl;

    return 0;
}
/**
 * @calcDiff
 *
 * Used to calculate the difference of two numbers
 *
 * console the output
 */
int calcDiff(int a, int b)
{
    cout << "Difference is = " << a - b << endl;

    return 0;
}
/**
 * @calcProduct
 *
 * Used to calculate the product of two numbers
 *
 * console the output
 */
int calcProduct(int a, int b)
{
    cout << "Product is = " << a * b << endl;

    return 0;
}

int main()
{
    int a, b;

    cout << "Enter first number = " << endl;
    cin >> a;
    cout << "Enter second number = " << endl;
    cin >> b;

    calcSum(a, b);
    calcDiff(a, b);
    calcProduct(a, b);

    /**
     * @system()
     *
     * A built in function of c++ that have some methods such as preventing screen from being auto closed
     */
    system("pause");

    return 0;
}
