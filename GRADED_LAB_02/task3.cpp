#include <iostream>
using namespace std;
int main()
{
    char singleChar;

    cout << "Enter the character:";
    cin >> singleChar;

    if (singleChar == 'A' || singleChar == 'a' || singleChar == 'E' || singleChar == 'e' || singleChar == 'I' || singleChar == 'i' || singleChar == 'O' || singleChar == 'o' || singleChar == 'U' || singleChar == 'u')
    {
        cout << "Entered character is vowel" << endl;
    }
    else
    {
        cout << "Entered character is not vowel" << endl;
    }

    system("pause");

    return 0;
}
