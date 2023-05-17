#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number:";
    cin >> a;

    int b;
    cout << "Enter a number:";
    cin >> b;

    int c;
    cout << "Enter a number :";
    cin >> c;

    // Total 100 hud ni likhna ap  ne. user se jo input lie hain 3 uno plus krna ha keasy.  jaise basic
    float addNumbers;
    addNumbers = a + b + c;
    float percentage;
    percentage = (float)(addNumbers / 300) * 100;
    cout << "the percentage is" << percentage;

    if (percentage >= 90)
    {
        cout << "If percentage is greater than and equal to 90 assign grade A";
    }
    if (percentage >= 75)
    {
        cout << "If percentage is greater than and equal to 75 assign grade b";
    }

    if (percentage >= 65)
    {
        cout << "if percentage is greater than and equal to 65 assign grade c";
    }

    system("pause");
    return 0;
}