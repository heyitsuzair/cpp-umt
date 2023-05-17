#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter the first angle:";
    cin >> a;

    cout << "Enter the second angle:";
    cin >> b;

    cout << "Enter the third angle:";
    cin >> c;

    if (a + b + c == 180)
    {

        cout << "Triangle is Formed" << endl;
    }
    else
    {
        cout << "Triangle is not Formed" << endl;
    }

    system("pause");

    return 0;
}
